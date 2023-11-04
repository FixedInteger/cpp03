#include "ClapTrap.hpp" 

int main()
{
    ClapTrap claptrap("Claptrap");
    ClapTrap claptrap2("Claptrap2");
    ClapTrap claptrap3(claptrap2);

    claptrap.attack("Handsome Jack");
    claptrap.takeDamage(2);
    claptrap.beRepaired(1);
    claptrap.attack("Handsome Jack");
    claptrap.takeDamage(200);
    claptrap.beRepaired(200);
    claptrap.attack("Handsome Jack");
    claptrap.takeDamage(200);
    claptrap.beRepaired(200);


  
    
    return (0);
}


