#include "Zombie.hpp"

int main()
{
  size_t N;

  N = 4;
  Zombie* salut = zombieHorde(N, "coucou");
  for (size_t i = 0; i < N; i++)
    salut[i].announce();
  delete [] salut;
  return 0;
}
