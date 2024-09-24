#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
public:
  ScavTrap(std::string);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  ~ScavTrap(void);
};
