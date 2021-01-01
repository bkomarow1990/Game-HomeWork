#pragma once
#include "Lib.h"
#include "Team.h"
#include <conio.h>
class Game
{
public:
	Game() = default;
	void play();
private:
	Team team1;
	Team team2;
};

