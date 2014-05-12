#ifndef ITEM_H
#define ITEM_H

class Item {
private:
  char* name;
  char* description;
  Item() {}

public:
  Item(char* name, char* description);

  char* getName() { return name; }

  char* getDescription() { return description; }

  void setName(char* newName);

  void setDescription(char* newDescription);
};
#endif
