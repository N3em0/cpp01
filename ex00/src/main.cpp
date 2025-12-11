#include "Zombie.hpp"

int main()
{
  randomChump("salut"); 
  Zombie *salut = newZombie("coucou");
  salut->announce();
  delete salut;
  return 0;
}
