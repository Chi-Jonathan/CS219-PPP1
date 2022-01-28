#ifndef HEXTODEC_H
#define HEXTODEC_H
#include <iostream>
#include <bits/stdc++.h>
#include <stdint.h>
#include <string>

class HexToDec{
  uint32_t decNum = 0;
  public:
  HexToDec() = default;
  HexToDec(std::string);
  uint32_t getDec();
};

#endif