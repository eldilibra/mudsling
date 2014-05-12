#include "Player.h"
#include "Item.h"

Player::Player(int newId, char* newUsername, char* newPassword) {
  id = newId;
  username = newUsername;
  password = newPassword;
}

void Player::setId(int newId) {
  id = newId;
}

void Player::setUsername(char* newUsername) {
  username = newUsername;
}

void Player::setPassword(char* newPassword) {
  password = newPassword;
}

void Player::setInventory(Item* items) {
  inventory = items;
}
