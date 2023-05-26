#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
    protected:
    std::string name;
    int         hit_point;
    int         energy_point;
    int         attack_damage;

    public: 
        ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};
class ScavTrap : public ClapTrap
{
    public:
        void guardGate();

};

#endif