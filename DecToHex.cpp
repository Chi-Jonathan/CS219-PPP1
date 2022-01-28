#include "DecToHex.h"

DecToHex::DecToHex(uint32_t dec){
  while (dec!=0){
    uint32_t temp = 0;
    temp = dec%16;
    if (temp<10){
      hexNum[count] = temp + 48;
      count++;
    }else if(temp < 16){
      hexNum[count] = temp + 55;
      count++;
    }
    dec = dec/16;

  }
}

void DecToHex::printHex(){
  for(int j = count-1; j>= 0; j--){
    std::cout<<hexNum[j];
  }
}
