#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public   ClapTrap
{
    private :
        std::string _name;
    public :
        //orthodox form
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& copy);
        void highFivesGuys(void);
        //getters
        std::string get_name(void) const;
        //setters
        void set_name(std::string name);
};


#endif //FRAGTRAP_HPP