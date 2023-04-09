#include "oper.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
	string command;
	bool valid = true;
	while (command != "4" and command != "3"){
		if (valid){
			cout << "=================================================" << endl;
			cout << "1. PLAY GAME" << endl;
			cout << "2. SAVE GAME" << endl;
			cout << "3. LOAD GAME" << endl;
			cout << "4. QUIT GAME" << endl;
			cout << "Please enter a numer." << endl;
			cout << "=================================================" << endl;
			}
		cin >> command;
		// SAVE GAME
		if (command == "2"){
			string player_name;
			int player_level;
			int player_health;
			cout << "Enter player name: ";
			cin >> player_name;
			cout << "Enter player level: ";
			cin >> player_level;
			cout << "Enter player health: ";
			cin >> player_health;
			string file_name = player_name + ".txt";
			save_game(file_name, player_name, player_level, player_health);
			valid = true;
		}
		// LOAD GAME
		if (command == "3"){
			string player_name;
			cout << "Enter player name: ";
			cin >> player_name;
			string file_name = player_name + ".txt";
			load_game(file_name);
			valid = true;
		}
		// ERROR INPUT MESSAGE
		if (command != "2" and command != "3" and command != "4"){
			cout << "Please enter a valid number!!" << endl;
			valid = false;
		}
	}
}
