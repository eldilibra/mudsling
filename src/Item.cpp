#include "Item.h"

Item::Item(char* newName, char* newDescription) {
  name = newName;
  description = newDescription;
}

void Item::setName(char* newName) {
  name = newName;
}

void Item::setDescription(char* newDescription) {
  description = newDescription;
}
