#include "ClapTrap.hpp" 

int main()
{
    std::string name = "9lwa";
    ClapTrap clapTrap1("haha"); // first claptrap
    ClapTrap clapTrap2(name); //second claptrap  
    clapTrap1.attack(name);
    clapTrap2.takeDamage(5);
    clapTrap2.beRepaired(5);


  
    
    return (0);
}