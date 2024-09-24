#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : name(name), damage(0), health(10), energy(10) {
  std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap deconstructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << "Copy Constructor called" << std::endl;
  name = other.name;
  damage = other.damage;
  health = other.health;
  energy = other.energy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this == &other) {
    return (*this);
  } else {
    name = other.name;
    damage = other.damage;
    health = other.health;
    energy = other.energy;
    return (*this);
  }
}

void ClapTrap::attack(const std::string &target) {
  if (health <= 0) {
    std::cout << "ClapTrap " << name << " has no health to act" << std::endl;
    return;
  } else if (energy <= 0) {
    std::cout << "ClapTrap " << name << " has no energy to act" << std::endl;
    return;
  } else {
    energy -= 1;
    std::cout << "ClapTrap " << name << " used 1 energy to attack " << target
              << " causing " << damage << " points of damage"
              << ". Remaining energy: " << energy << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  health -= amount;
  std::cout << "ClapTrap " << name << " takes " << amount << " of damage"
            << ". Remaining health: " << health << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energy <= 0) {
    std::cout << "ClapTrap " << name << " has no energy to act" << std::endl;
    return;
  } else {
    energy -= 1;
    health += amount;
    std::cout << "ClapTrap " << name << " used 1 energy to repair " << amount
              << " of health" << ". Current health: " << health
              << ". Remaining energy: " << energy << std::endl;
  }
}
