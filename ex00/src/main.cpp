#include "Zombie.hpp"

int main()
{
  randomChump("Stack_Zombie"); 
  Zombie *Heap_Zombie = newZombie("Heap_Zombie");
  Heap_Zombie->announce();
  delete Heap_Zombie;
  return 0;
}
