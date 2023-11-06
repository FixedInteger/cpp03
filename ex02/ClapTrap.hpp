#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
	private:
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap(int hitPoints, int energyPoints, int attackDamage);
		ClapTrap& operator=(const ClapTrap& copy);
		//getters 
		int get_hitpoints() const;
		int get_energypoints() const;
		int get_attackdamage() const;
		//setters
		void set_hitpoints(int hitPoints);
		void set_energypoints(int energyPoints);
		void set_attackdamage(int attackDamage);
};
#endif //CLAPTRAP_HPP
