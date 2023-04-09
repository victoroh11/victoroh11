// oper.cpp

#include <iostream>
#include "oper.h"
#include <fstream>
#include <string>
using namespace std;

void save_game(string file_name, string player_name, int player_level, int player_health){
	ofstream outfile(file_name);
	if (outfile){
		outfile << player_name << endl;
		outfile << player_level << endl;
		outfile << player_health << endl;
		outfile.close();
		cout << "Game saved!" << endl;
	}else{
		cout << "Error: could not open file for saving" << endl;
	}
}

void load_game(string file_name){
	string x;
	ifstream infile(file_name);
	if (infile){
		int i=1;
		while(infile >> x){
			if (i==1){
				cout << "Player name is: ";
			}
			if (i==2){
				cout << "Player level is: ";
			}
			if (i==3){
				cout << "Player health is: ";
			}
			cout << x << endl;	
			i++;
		}
		infile.close();
		cout << "Game loaded!" << endl;
	}else{
		cout << "Error: could not open file for loading" << endl;
	}
}	

