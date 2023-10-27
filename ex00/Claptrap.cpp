#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
   
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const& target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;

    if(this->_energyPoints > 0)
        this->_energyPoints--;
    
    if(this->_hitPoints > 0)
        this->_hitPoints--;
    
    if(this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " can't do anything " << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if(this->_hitPoints > 0)
        this->_hitPoints -= amount;
    
    if(this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is dead " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_energyPoints > 0)
        this->_energyPoints++;
    std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " points of damage!" << std::endl;
    if(this->_hitPoints > 0)
        this->_hitPoints += amount;
    
    if(this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is dead " << std::endl;
}