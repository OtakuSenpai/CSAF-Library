#include "numbersys.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>

int neel :: numbers :: toInt(const char& value) {
  if(value == '0') return 0;
  else if(value == '1') return 1;
  else if(value == '2') return 2;
  else if(value == '3') return 3;
  else if(value == '4') return 4;
  else if(value == '5') return 5;
  else if(value == '6') return 6;
  else if(value == '7') return 7;
  else if(value == '8') return 8;
  else if(value == '9') return 9;
  else return -1; 
}

std::string neel :: numbers :: decimalToBinary(const std::string& decValue) {
  long long quotient,value = std::stoll(decValue);
  std::string result; 
  int remainder;
  for(int i = 0; value != 1; ++i) {
    quotient = value/2;
    remainder = value%2;
    result = std::to_string(remainder) + result;
    value = quotient;
    if(value == 1) result = std::to_string(value) + result;    
  }
  return result;
}

std::string neel :: numbers :: binaryToDecimal(const std::string& binValue) {
  long long tempResult = 0;
  std::string result;
  size_t posAt = 0,iter2 = 0,temp = 0;
  for(size_t iter1 = binValue.size(); iter1 > 0 ; --iter1) {
    if(toInt(binValue[iter1-1]) != -1)
    	temp = toInt(binValue[iter1-1]);   
    posAt = temp * std::pow(2,iter2);
    tempResult = tempResult + posAt;
    ++iter2; temp = 0;
  }
  result = std::to_string(tempResult);
  return result;
}

std::string neel :: numbers :: decimalToOctal(const std::string& decValue) {
  long long quotient = std::stoll(decValue);
  std::string result; 
  int remainder;
  while(quotient != 0) {    
    remainder = quotient%8;
    quotient = quotient/8;
    result = std::to_string(remainder) + result;    
  }
  return result;
}

std::string neel :: numbers :: octalToDecimal(const std::string& octValue) {
  long long tempResult = 0;
  std::string result;
  size_t posAt = 0,iter1,iter2 = 0,temp = 0;
  for(iter1 = octValue.size(); iter1 > 0; --iter1) {
    if(toInt(octValue[iter1-1]) != -1)
      temp = toInt(octValue[iter1-1]);
    posAt = temp * std::pow(8,iter2);
    tempResult = tempResult + posAt;
    ++iter2; temp = 0;   
  }
  result = std::to_string(tempResult);
  return result;
}

