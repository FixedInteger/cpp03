#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
    ScavTrap::set_hitpoints(100);
    ScavTrap::set_energypoints(50);
    ScavTrap::set_attackdamage(20);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->set_hitpoints(copy.get_hitpoints());
		this->set_energypoints(copy.get_energypoints());
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    if(this->get_hitpoints() == 0)
    {
        std::cout << "ScavTrap " << this->_name << " can't attack " << target << " because it's dead" << std::endl;
        return ;
    }
	std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->get_hitpoints() << " points of damage!" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << std::endl;
}