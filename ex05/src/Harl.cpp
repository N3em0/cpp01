#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{

  void (Harl::*ptrDebug)(void) = &Harl::debug();
  void (Harl::*ptrInfo)(void) = &Harl::info();
  void (Harl::*ptrWarning)(void) = &Harl::warning();
  void (Harl::*ptrError)(void) = &Harl::error();
  std::cout << "salut" << level << std::endl;
}
