#pragma once

#include <iostream>
#include <string>

class ClapTrap {
public:
  ClapTrap(std::string);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);
  ~ClapTrap(void);

private:
  std::string name;
  int damage;
  int health;
  int energy;

public:
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
