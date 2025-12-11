#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
  Zombie newZombie = Zombie();
  newZombie._name = name;
  newZombie.announce();
}
