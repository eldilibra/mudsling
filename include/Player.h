#ifndef PLAYER_H
#define PLAYER_H

#include "Item.h"

class Player {
private:
  int id;
  char* username;
  char* password;
  Item* inventory;
  Player() {}

public:
  Player(int id, char* username, char* password);

  int getId() { return id; }

  char* getUsername() { return username; }

  char* getPassword() { return password; }

  Item* getInventory() { return inventory; }

  void setId(int id);

  void setUsername(char* username);

  void setPassword(char* password);

  void setInventory(Item* items);
};
#endif
