#include "Harl.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;
  Harl harl;
  std::cout << "bonsoir a tous" << std::endl;
  harl.complain("ERROR");
  return 1;
}
