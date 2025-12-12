#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
  std::cout << "HumanA constructor called" << std::endl;
  this->_name = name;
  return ;
}

HumanA::~HumanA()
{
  std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack()
{
  std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
