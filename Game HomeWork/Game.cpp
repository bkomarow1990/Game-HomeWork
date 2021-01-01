#include "Game.h"

void Game::play()
{
	int choice = 0;
	int current_rand_t1, current_rand_t2;
	while (team1.isHaveAlivePlayers() && team2.isHaveAlivePlayers())
	{
		choice = 0;
		cout << "PRESS SPACE" << endl;
		while (choice!=32)
		{
		
			//getting correct random index
			current_rand_t1 = rand() % team1.RAND_SIZE;
			do
			{
				current_rand_t1 = rand() % team1.RAND_SIZE;
			} while (team1.units[current_rand_t1]->getHP() < 0);
			current_rand_t2 = rand() % team2.RAND_SIZE;
			do
			{
				current_rand_t2 = rand() % team2.RAND_SIZE;
			} while (team2.units[current_rand_t2]->getHP() < 0);
			// attack 
			if (rand() % 100 + 1 <= (team2.units[current_rand_t2]->getDodge())) {
				cout << typeid(*team2.units[current_rand_t2]).name() << "  -  " <<  team1.units[current_rand_t1]->getDmg()  << " HP And have "<< team2.units[current_rand_t2]->getHP() - team1.units[current_rand_t1]->getDmg() <<" HP"<< endl;
				team2.units[current_rand_t2]->setHp(team2.units[current_rand_t2]->getHP() - team1.units[current_rand_t1]->getDmg());
			
			}
			else {
				cout << typeid(*team2.units[current_rand_t2]).name() << " in team 2 was Dodged " << endl;
			}
			if (rand() % 100 + 1  <= (team1.units[current_rand_t1]->getDodge()))
			{
				cout << typeid(*team1.units[current_rand_t1]).name() <<" in Team1 "<< " -  "<< team2.units[current_rand_t1]->getDmg()<<" HP and have " << team1.units[current_rand_t1]->getHP() - team2.units[current_rand_t1]->getDmg() << " HP"<<endl;
				team1.units[current_rand_t1]->setHp(team1.units[current_rand_t1]->getHP() - team2.units[current_rand_t1]->getDmg());
			
			}
			else {
				cout << typeid(*team1.units[current_rand_t1]).name() << " in team 1 was Dodged " << endl;
			}
			//for (; i < team1.RAND_SIZE; ++i)
			//{
			//
			//	for (; j < team1.RAND_SIZE; ++j)
			//	{
			//
			//		/*if (typeid(*team1.units[i]) == typeid(*team2.units[j]))
			//		{
			//		}*/
			//	/*		if (team1.units[i]->getHP()==0)
			//			{
			//				team1.units.erase(team1.units.begin()+i);
			//				cout << (typeid(*team1.units[i]).name()) << " in team1 is die" << endl;
			//				++i;
			//			}
			//			if (team2.units[j]->getHP() == 0)
			//			{
			//				team2.units.erase(team2.units.begin() + j);
			//				cout << (typeid(*team2.units[j]).name()) << " in team2 is die" << endl;
			//				++j;
			//			}*/
			//			cout << typeid(*team1.units[i]).name()<<" " << typeid(*team2.units[j]).name() << endl;
			//			if (rand()% 100 + 1 <= (team2.units[j]->getDodge())) //  <= 60
			//			{
			//				team2.units[j]->setHp(team2.units[j]->getHP() - team1.units[i]->getDmg());
			//				cout << typeid(*team2.units[j]).name()<<" in team2 have "<<team2.units[j]->getHP()<< endl;
			//			
			//			}
			//			if (rand() % 100 + 1  <= (team1.units[i]->getDodge()))
			//			{
			//				team1.units[i]->setHp(team1.units[i]->getHP() - team2.units[j]->getDmg());
			//				cout << typeid(*team1.units[i]).name() << " in team1 have " << team1.units[i]->getHP() << endl;
			//				break;
			//			}
			//	
			cout << "Team1 : " << endl;
			team1.print();
			cout << "Team2 : " << endl;
			team2.print();
			if (!team1.isHaveAlivePlayers())
			{
				cout << "Win team2" << endl;
			}
			if (!team2.isHaveAlivePlayers())
			{
				cout << "Win team1" << endl;
			}
			choice = _getch();
			}
			}
		
			
		}
