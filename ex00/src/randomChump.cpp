#include "Zombie.hpp"

void randomChump(std::string name)
{
  Zombie newZombie = Zombie();
  newZombie.setZombieName(name);
  newZombie.announce();
}
