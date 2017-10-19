#ifndef NUMBERSYS_HPP
#define NUMBERSYS_HPP

#include <string>

namespace neel {
  namespace numbers {
  		
    //Binary and decimal convertion
    std::string decimalToBinary(const std::string& decValue);
    std::string binaryToDecimal(const std::string& binValue);

    //Octal and decimal convertion
    std::string decimalToOctal(const std::string& decValue);
    std::string octalToDecimal(const std::string& octValue);

    //Hex and decimal convertion
    std::string decimalToHex(const std::string& decValue);
    std::string hexToDecimal(const std::string& hexValue);
    
    //Between Octal,Binary and Hexadecimal
    std::string octalToBin(const std::string& decValue);
    std::string binToOctal(const std::string& decValue);
    std::string hexToBin(const std::string& decValue);
    std::string binToHex(const std::string& decValue);
    
    //Helper functions
    int toInt(const char& value); 
  } //namespace numbers
} //namespace neel    

#endif