#include "ClapTrap.hpp"
ClapTrap::ClapTrap()
{
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	return (*this);
}
//getters
int ClapTrap::get_hitpoints() const
{
    return (this->_hitPoints);
}

int ClapTrap::get_energypoints() const
{
    return (this->_energyPoints);
}

int ClapTrap::get_attackdamage() const
{
    return (this->_attackDamage);
}
//setters
void ClapTrap::set_hitpoints(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::set_energypoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}
void ClapTrap::set_attackdamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}
