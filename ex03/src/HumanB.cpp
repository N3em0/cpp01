#include "HumanB.hpp"
#include <cstddef>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
  std::cout << "HumanB constructor called" << std::endl;
  return;
}

HumanB::~HumanB() { std::cout << "HumanB destructor called" << std::endl; }

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

void HumanB::attack()
{
  if (this->_weapon != NULL)
  {
    std::cout << this->_name << " attack with their "
              << this->_weapon->getType() << std::endl;
    return;
  }
  std::cout << this->_name << " attack with their fist" << std::endl;
  return;
}
