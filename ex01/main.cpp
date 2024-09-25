#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ClapTrap ct("Trappy");
  ct.attack("Unknown");
  ct.takeDamage(5);
  ct.beRepaired(5);
  ct.takeDamage(20);
  ct.attack("Unknown");
  { ClapTrap duplicate = ct; }
  {
    ClapTrap trap("Truppy");
    trap = ct;
  }
  return 0;
}
