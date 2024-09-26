#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "FragTrap (" << name << ") constructor called" << std::endl;
  setDamage(30);
  setHealth(100);
  setEnergy(100);
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap (" << getName() << ") deconstructor called"
            << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << "FragTrap copy assignment operator called" << std::endl;
  if (this == &other) {
    return *this;
  } else {
    (ClapTrap::operator=(other));
    return *this;
  }
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << getName() << " demands high five!" << std::endl;
}
