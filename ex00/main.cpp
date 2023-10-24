#include <iostream>
class ClapTrap
{
private:
    int hitPoints;
    int energyPoints;
    std::string name;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &copy);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " be repaired " << amount << " points of damage!" << std::endl;
}
ClapTrap::ClapTrap (std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->energyPoints = 10;
    this->hitPoints = 10;
    attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}
int main()
{
    ClapTrap clap("clap");
    clap.rangedAttack("target");
    clap.meleeAttack("target");
    clap.takeDamage(5);
    clap.beRepaired(5);
    return 0;
}
