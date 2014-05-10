#include <libpq-fe.h>
#include "stdio.h"
#include "stdlib.h"

static void exit_nicely(PGconn *conn) {
  PQfinish(conn);
  exit(1);
}

PGconn* init_db() {
  const char *conninfo;
  PGconn     *conn;
  PGresult   *res;
  int         nFields;
  int         i, num_records;

  conninfo = "dbname = mudsling";
  conn = PQconnectdb(conninfo);
  if (PQstatus(conn) != CONNECTION_OK) {
    fprintf(stderr, "Connection to database failed: %s",
    PQerrorMessage(conn));
    exit_nicely(conn);
  }
  return conn;
}

void derp() {
  /*
  res = PQexec(conn, "SELECT * FROM player");
  if ((!res) || (PQresultStatus(res) != PGRES_TUPLES_OK))
  {
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

  printf("Do you want to play?\n");
  printf("%s\n", getUserInput());
  return 0;
  */
}
