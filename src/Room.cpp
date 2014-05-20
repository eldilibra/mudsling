#include "Room.h"
#include "Player.h"
#include "Item.h"
using namespace std;
Room :: Room(char* players, id, item);
{
  players = new_players;
  id = new_id;
  item = new_item;
}  
void Room :: set_players(char* players)
{
  players = new_players;
}
void Room :: set_id(char* id)
{
  Player = new_id;
}
void Room :: set_item(char* item)
{
  item = new_item;
}
