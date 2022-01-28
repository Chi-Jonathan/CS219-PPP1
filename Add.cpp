#include "Add.h"
#include "HexToDec.h"

Add::Add(std::string hex1, std::string hex2){
  uint32_t dec1 = 0;
  uint32_t dec2 = 0;
  HexToDec htd1(hex1);
  dec1 = htd1.getDec();
  HexToDec htd2(hex2);
  dec2 = htd2.getDec();
  sum = dec1 + dec2;
}

uint32_t Add::getSum(){
  return sum;
}