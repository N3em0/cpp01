#include "Zombie.hpp"
//
// Zombie* newZombie(std::string name)
// {
//   Zombie* newZombie = new Zombie();
//   newZombie->setZombieName(name);
//   return (newZombie);
// }

Zombie* zombieHorde(int N, std::string name)
{
  Zombie* zombieHorde = new Zombie[N];
  for (int i = 0; i < N; i++)
  {
    zombieHorde[i].setZombieName(name);
  }
  return (zombieHorde);
}
