#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
class ScavTrap : private  ClapTrap
{
	private:
		std::string _name;
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& copy);
		void attack(std::string const & target);
        void guardGate();
};
#endif