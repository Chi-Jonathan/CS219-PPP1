#include <iostream>
#include <fstream>
#include <stdint.h>
#include <iomanip>
#include <sstream>
#include <string>
#include "HexToDec.h"
#include "DecToHex.h"
#include "Add.h"

int main() {
  std::ifstream readFile("Programming-Project-1.txt");
  std::string op;
  std::string hex1;
  std::string hex2;
  while(readFile >> op >> hex1 >> hex2){
    if(op.compare("ADD") == 0){
      Add add(hex1, hex2);
      DecToHex dth(add.getSum());
      dth.printHex();
      std::cout<<std::endl;
    }
  }
}