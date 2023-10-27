#include "ClapTrap.hpp" 

int main()
{
    ClapTrap clapTrap("ClapTrap");
    ClapTrap clapTrapCopy(clapTrap);
    ClapTrap clapTrapAssign;
    
    clapTrapAssign = clapTrap;
    
    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);
    
    clapTrapCopy.attack("target");
    clapTrapCopy.takeDamage(10);
    clapTrapCopy.beRepaired(5);
    
    clapTrapAssign.attack("target");
    clapTrapAssign.takeDamage(5);
    clapTrapAssign.beRepaired(5);
    
    return (0);
}