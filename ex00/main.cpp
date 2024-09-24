#include "ClapTrap.hpp"

int main(void) {
  ClapTrap ct("Trappy");
  ct.attack("Unknown");
  ct.takeDamage(5);
  ct.beRepaired(5);
  ct.takeDamage(20);
  ct.attack("Unknown");
  return 0;
}
