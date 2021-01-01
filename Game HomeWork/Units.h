#pragma once
#include "Unit.h"
class Swordsman : public Unit
{
public:
	Swordsman(const int& hp = 15, const int& dmg = 5, const int& dodge = 60)
		:Unit(hp, dmg, dodge) {}
	virtual void print()const {
		cout << "Swordsman " << " HP: " << getHP() << " DMG: " << getDmg() << " DODGE: " << getDodge() << endl;
	}
private:
};
/// <summary>
/// Archer Unit
/// </summary>
class Archer : public Unit
{
public:
	Archer(const int& hp = 12, const int& dmg = 4, const int& dodge = 40)
		:Unit(hp, dmg, dodge) {}
	virtual void print()const {
		cout << "Archer " << " HP: " << getHP() << " DMG: " << getDmg() << " DODGE: " << getDodge() << endl;
	}
private:
};
/// <summary>
/// Mage
/// </summary>
class Mage : public Unit
{
public:
	Mage(const int& hp = 8, const int& dmg = 10, const int& dodge = 30)
		:Unit(hp, dmg, dodge) {}
	virtual void print()const {
		cout << "Mage " << " HP: " << getHP() << " DMG: " << getDmg() << " DODGE: " << getDodge() << endl;
	}
private:
};