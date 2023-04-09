// oper.h
#include <string>
#ifndef OPER_H
#define OPER_H

void save_game(std::string file_name, std::string player_name, int player_level, int player_health);
void load_game(std::string file_name);

#endif
