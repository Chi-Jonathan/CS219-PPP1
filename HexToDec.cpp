#include "HexToDec.h"

HexToDec::HexToDec(std::string hex){
  int length = hex.length();
  int base = 1;
  for(int count = length; count >= 0; count--){
    if(hex[count] >= 48 && hex[count] <= 57){
      decNum += (hex[count]- 48) * base;
      base*=16;
    }else if(hex[count] >= 65 && hex[count] <= 70){
      decNum += (hex[count] - 55) * base;
      base*=16;
    }
  }
}

uint32_t HexToDec::getDec(){
  return decNum;
}