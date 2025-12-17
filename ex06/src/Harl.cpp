#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*ptrFunctions[4])(void) = {&Harl::debug, &Harl::info,
                                         &Harl::warning, &Harl::error};
  size_t lvl = 0;
  for (size_t i = 0; i < 4; i++)
  {
    if (levels[i] == level)
    {
      lvl = i + 1;
      break;
    }
  }

  switch (lvl)
  {
  case 1:
    (this->*ptrFunctions[lvl - 1])();
    lvl++;
  case 2:
    (this->*ptrFunctions[lvl - 1])();
    lvl++;
  case 3:
    (this->*ptrFunctions[lvl - 1])();
    lvl++;
  case 4:
    (this->*ptrFunctions[lvl - 1])();
    break;
  default:
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
  }
}

void Harl::debug()
{
  std::cout
      << "[ DEBUG ]" << std::endl
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
      << std::endl
      << std::endl;
}

void Harl::info()
{
  std::cout
      << "[ INFO ]" << std::endl
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << std::endl
      << std::endl;
}

void Harl::warning()
{
  std::cout << "[ WARNING ]" << std::endl
            << "I think I deserve to have some extra bacon for free. I’ve been "
               "coming for years, "
               "whereas you started working here just last month."
            << std::endl
            << std::endl;
}

void Harl::error()
{
  std::cout << "[ ERROR ]" << std::endl
            << "This is unacceptable! I want to speak to the manager now."
            << std::endl
            << std::endl;
}
