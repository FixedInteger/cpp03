#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : private ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& copy);
        void highFivesGuys(void);
};

#endif //FRAGTRAP_HPP