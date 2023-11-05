
#include "FragTrap.hpp"

int main()
{
	FragTrap fragtrap("FragTrap");
	std::cout << "FragTrap name: " << fragtrap.get_name() << std::endl;
	std::cout << "FragTrap hitpoints: " << fragtrap.get_hitpoints() << std::endl;
	fragtrap.highFivesGuys();
	return 0;
}