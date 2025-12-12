#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
  std::cout << "HumanB constructor called" << std::endl;
  this->_name = name;
  return ;
}

HumanB::~HumanB()
{
  std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
  this->_weapon = &weapon;
}

void HumanB::attack()
{
  std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
}
