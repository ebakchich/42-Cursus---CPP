#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "name";
    this->attack_damage = 0;
    this->hit_point = 10;
    this->energy_point = 10;
}

void ClapTrap::attack(const std::string &target)
{
    this->energy_point--;
    std::cout << "ClapTrap attacks , it cauvese .."  << attack_damage; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hit_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
    if(hit_point && energy_point)
    {    
        this->energy_point--;
        hit_point += amount;
    }
}
