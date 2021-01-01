#include "Team.h"

const bool Team::isHaveAlivePlayers() const
{

	for (auto& i : units)
	{
		if (i->getHP() != 0)
		{
			return true;
		}
		
	}
	return false;
}

void Team::print() const
{
	cout << "-----Players-----" << endl;
	for (auto& i : units)
	{
		i->print();
	}
}

Team::Team(const string& team_name)
	:team_name(team_name)
{
	generateUnits();
}

void Team::generateUnits()
{
	
	//int random_values[RAND_SIZE];
	//int generated_values[RAND_SIZE];
	//bool isCorrectIndex = false;
	//for (int i = 0; i < RAND_SIZE; i++)
	//{
	//	while (!isCorrectIndex)
	//	{
	//		while (true)
	//		{

	//		}
	//		random_values[i] = rand() % 3+1;
	//	}
	vector<int> random_values;
	for (int i = 0; i < RAND_SIZE; i++)
	{

		random_values.push_back(rand() % 3 + 1);
		switch (random_values[i])
		{
		case 1:
			units.push_back(new Swordsman());
			break;
		case 2:
			units.push_back(new Archer());
			break;
		case 3:
			units.push_back(new Mage());
			break;
		default:
			break;
		}
	}
}
