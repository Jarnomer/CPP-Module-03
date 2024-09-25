#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
  ClapTrap claptrap("Clappy");
  FragTrap fragtrap("Fraggy");
  fragtrap.highFivesGuys();
  { FragTrap duplicate = fragtrap; }
  {
    FragTrap trap("AnotherFraggy");
    trap = fragtrap;
  }
  return 0;
}
