#include "Zombie.hpp"

int main()
{
  size_t N;

  N = 4;
  Zombie *Heap_Zombie = zombieHorde(N, "Zombie");
  for (size_t i = 0; i < N; i++)
    Heap_Zombie[i].announce();
  delete[] Heap_Zombie;
  return 0;
}
