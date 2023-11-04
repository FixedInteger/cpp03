
#include "ScavTrap.hpp"
int main()
{
	{
		ScavTrap scavTrap;
		ScavTrap scavTrap2(scavTrap);
		ScavTrap scavTrap3;
		scavTrap3 = scavTrap2;
		scavTrap.attack("Hamid");
		scavTrap.guardGate();


	}

}