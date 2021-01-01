#pragma once
#include "Lib.h"
#include "Units.h"
class Team
{
public:
	const bool isHaveAlivePlayers()const;
	void print()const;
	Team(const string & team_name ="TeamName");
	const int RAND_SIZE = 3;
private:
	string team_name;
	vector <Unit*> units;
	void generateUnits();
	friend class Game;
};

