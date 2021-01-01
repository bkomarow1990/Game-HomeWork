#include "Lib.h"
#include "Team.h"
#include "Units.h"
#include "Unit.h"
#include "Game.h"
#include <ctime>
void showMenu() {
	size_t ans;
	cout << "\t\t 1. PlayGame"<<endl;
	cout << "\t\t 0. Exit"<<endl;
	cin >> ans;
	if (ans==1)
	{
		Game game; // call ctor game
		game.play(); // start void play function
	}
	else {
		return ;
	}

	
}
int main() {
	srand(time(NULL));
	//Team t1;
	//t1.print();
	//Unit* t = new Mage();
	//t->print();
	cout << "============================Game============================" << endl;
	showMenu();
	cout << "============================================================" << endl;
	return 0;
}