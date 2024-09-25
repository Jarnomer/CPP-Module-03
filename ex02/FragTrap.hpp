#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
public:
  FragTrap(std::string name);
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &other);
  ~FragTrap(void);

public:
  void highFivesGuys(void);
};
