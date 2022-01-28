/*
  This file reads in the file then sees what type of operation is needed. It then calls the add class to add the two hex numbers then prints out the sum by calling the DecToHex class.
  @file main.cpp
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
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
  //sets up to read in file and take in the operation, and hex numbers
  std::ifstream readFile("Programming-Project-1.txt");
  std::string op;
  std::string hex1;
  std::string hex2;
  //reads in file then gets operation and hex numbers, then prints them
  while(readFile >> op >> hex1 >> hex2){
    if(op.compare("ADD") == 0){
      Add add(hex1, hex2);
      DecToHex dth(add.getSum());
      dth.printHex();
      std::cout<<std::endl;
    }
  }
}