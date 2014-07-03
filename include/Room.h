#ifndef ROOM_H
#define ROOM_H
#include "Item.h"
#include "Player.h"
using namespace std;
class Room{
private:
  char* players, item, id;
  Room() {}
public:
Player(char* players, item, id);
Player* get_id(char* id){
    return id;
  }

char* get_item(char* item){
    return item;
  }

char* get_currentplayers(char* players){
    return players;
  }
void set_id(Player* id);

void set_item(char* item);
void set_currentplayers(char* players);

char* getnorth_Room(NULL){
  }
char* geteast_Room(NULL){
  }
char* getsouth_Room(NULL){
  }
char* getwest_Room(NULL){
  }
void setnorth_Room(char*);
void seteast_Room(char*);
void setsouth_Room(char*);
void setwest_Room(char*);
};
#endif
