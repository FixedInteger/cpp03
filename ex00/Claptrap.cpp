#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& copy) {
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
}

// Destructor
ClapTrap::~ClapTrap() {}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
    if (this != &copy) {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attackDamage = copy._attackDamage;
    }
    return *this;
}

// Attack function
void ClapTrap::attack(const std::string& target) 
{
    if (_hitPoints > 0 && _energyPoints > 0) 
    {
        std::cout << _name << " attacks " << target << " for " << _attackDamage << " damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << _name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}

// Take damage function
void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints > 0) {
        _hitPoints -= amount;
        if (_hitPoints < 0) 
        {
            _hitPoints = 0;
        }
        std::cout << _name << " takes " << amount << " damage. Hit points: " << _hitPoints << std::endl;
    } else {
        std::cout << _name << " is already destroyed and can't take more damage." << std::endl;
    }
}

// Be repaired function
void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints > 0 && _energyPoints > 0) 
    {
        _hitPoints += amount;
        std::cout << _name << " is repaired for " << amount << " hit points. Hit points: " << _hitPoints << std::endl;
        _energyPoints--;
    } else {
        std::cout << _name << " can't be repaired. Not enough hit points or energy points." << std::endl;
    }
}


