#include "Weapon.hpp"

Weapon::Weapon()
{
  std::cout << "Constructor without parameters called" << std::endl;
}

Weapon::Weapon(const std::string& type) : _type(type)
{
  std::cout << "Constructor with parameters called" << std::endl;
}

Weapon::~Weapon()
{}

const std::string& Weapon::getType()
{
  return (this->_type);
}

void Weapon::setType(const std::string& type)
{
  this->_type = type;
}
