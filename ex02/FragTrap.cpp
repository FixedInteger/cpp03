
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100,100,30) , _name("FragTrap")
{

    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

void FragTrap::set_name(std::string name)
{
    this->_name = name;
}

std::string  FragTrap::get_name(void) const
{
    return this->_name;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->get_name() << " wants to high five you" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    this->set_name(copy.get_name());
    this->set_attackdamage(copy.get_attackdamage());
    this->set_energypoints(copy.get_energypoints());
    this->set_hitpoints(copy.get_hitpoints());
    return *this;
}