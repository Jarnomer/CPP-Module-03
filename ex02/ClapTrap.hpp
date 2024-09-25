#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ClapTrap {
public:
  ClapTrap(std::string name);
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

public: // setters
  void setName(std::string name);
  void setDamage(unsigned int amount);
  void setHealth(unsigned int amount);
  void setEnergy(unsigned int amount);

public: // getters
  std::string getName(void);
  int getDamage(void);
  int getHealth(void);
  int getEnergy(void);
};
