#include <iostream>
#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
public:
  Weapon();
  Weapon(const std::string &type);
  ~Weapon();

  const std::string &getType();
  void setType(const std::string &type);

private:
  std::string _type;
};

#endif
