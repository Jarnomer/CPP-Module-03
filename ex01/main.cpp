#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ClapTrap claptrap("Clappy");
  ScavTrap scavtrap("Scavvy");
  scavtrap.attack(claptrap.getName());
  scavtrap.guardGate();
  { ScavTrap duplicate = scavtrap; }
  {
    ScavTrap trap("AnotherScavvy");
    trap = scavtrap;
  }
  return 0;
}
