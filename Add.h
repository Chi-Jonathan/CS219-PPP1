#ifndef ADD_H
#define ADD_H

#include "DecToHex.h"
#include "HexToDec.h"
#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>
#include <string>

class Add{
  uint32_t sum = 0;
public:
  Add() = default;
  Add(std::string, std::string);
  uint32_t getSum();
};

#endif