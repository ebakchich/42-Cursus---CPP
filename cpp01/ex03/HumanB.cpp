#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &a1) {
    a = &a1;
}

void    HumanB::attack() {
    std::cout << name << " attacks with their " << a->getType() << std::endl;
}

HumanB::HumanB(std::string name2) {
    name = name2;
}