#include <libpq-fe.h>
#include "Player.h"
#include "stdio.h"
#include "stdlib.h"

static void exit_nicely(PGconn *conn) {
  PQfinish(conn);
  exit(1);
}

PGconn* init_db() {
  const char *conninfo;
  PGconn     *conn;

  conninfo = "dbname = mudsling";
  conn = PQconnectdb(conninfo);
  if (PQstatus(conn) != CONNECTION_OK) {
    fprintf(stderr, "Connection to database failed: %s",
    PQerrorMessage(conn));
    exit_nicely(conn);
  }
  return conn;
}

Player player_by_id(PGconn* conn, int id) {
  PGresult *res;
  int      nFields, num_records, i;

  res = PQexecParams(conn,
          "SELECT * FROM player where id = $1",
          1,
          NULL,
          NULL,
          NULL,
          0);
  if ((!res) || (PQresultStatus(res) != PGRES_TUPLES_OK)) {
    fprintf(stderr, "SELECT command did not return tuples properly\n");
    PQclear(res);
    exit_nicely(conn);
  }

  num_records = PQntuples(res);

  for(i = 0 ; i < num_records ; i++) {
    printf("id: %s username: %s pwd_hash: %s\n", PQgetvalue(res, i, 0), PQgetvalue(res, i, 1), PQgetvalue(res, i, 2));
  }

  PQclear(res);
  PQfinish(conn);

  return ;
}
