#include "Unit.h"

void Unit::setHp(const int& hp)
{
	if (hp<=0)
	{
		this->hp = 0;
		return;
	}
	if (hp>=0 && hp<=100)
	{
		this->hp = hp;
	}
}

void Unit::setDmg(const int& dmg)
{
	if (dmg >= 0 && dmg <= 100)
	{
		this->dmg = dmg;
	}
}

void Unit::setDodge(const int& dodge)
{
	if (dodge >= 0 && dodge <= 100)
	{
		this->dodge = dodge;
	}
}

void Unit::print() const
{
	cout << "Unit" << endl;
}
