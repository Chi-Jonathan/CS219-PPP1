#ifndef DECTOHEX_H
#define DECTOHEX_H
#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>
#include <string>

class DecToHex{
  std::string hexOut = "";
  char hexNum[8];
  uint32_t count = 0;
  public:
  DecToHex() = default;
  DecToHex(uint32_t);
  void printHex();
};

#endif