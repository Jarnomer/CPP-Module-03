#include "DiamondTrap.hpp"

int main(void) {
  DiamondTrap diamondtrap("Shiny");
  diamondtrap.whoAmI();
  { DiamondTrap duplicate = diamondtrap; }
  {
    DiamondTrap other("Shinier");
    other = diamondtrap;
  }
  return 0;
}
