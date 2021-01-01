#pragma once
#include "Lib.h"
class Unit
{
public:
	Unit(const int& hp = 0, const int& dmg = 0, const int& dodge = 0) 
		:hp(hp),dmg(dmg),dodge(dodge)
	{
	
	}
	void setHp(const int&hp);
	void setDmg(const int&dmg);
	void setDodge(const int&dodge);
	const int getHP()const { return hp; }
	const int getDmg()const { return dmg; }
	const int getDodge()const { return dodge; }
	virtual void print()const;
private:
	int hp;
	int dmg;
	int dodge;
};

