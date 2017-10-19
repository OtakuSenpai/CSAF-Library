#include <iostream>
#include <cstring>
#include "numbersys.hpp"

int main(int argc, char** argv) {
  try {
  	 std::string input;
    if(argc<2 || (strcmp(argv[1],"-h")==0)) {
    std::cout<<"Command parameters are:- \n"
             <<"  -i     : Input value.\n"
             <<"  -de    : Convert it to decimal.\n"
             <<"  -bi    : Convert it to binary.\n"
             <<"  -oc    : Convert it to octal.\n"
             <<"  -hx    : Convert it to hexadecimal.\n"
             <<"  -id    : Input is decimal.\n"
             <<"  -ib    : Input is binary.\n"
             <<"  -io    : Input is octal.\n"
             <<"  -ih    : Input is hex.\n"
             <<"  -h     : Show help.\n"<<std::endl;      
    }
    if((strcmp(argv[1],"-i")==0) && (strcmp(argv[3],"-id")==0) && (strcmp(argv[4],"-bi")==0)) {
      input.assign(argv[2]);
      std::string result = neel::numbers::decimalToBinary(input);
      std::cout<<"The decimal to binary conversion is: "<<result<<std::endl;
    }
    else if((strcmp(argv[1],"-i")==0) && (strcmp(argv[3],"-ib")==0) && (strcmp(argv[4],"-de")==0)) {
      input.assign(argv[2]);
      std::string result = neel::numbers::binaryToDecimal(input);
      std::cout<<"THe binary to decimal conversion is: "<<result<<std::endl;    
    }
    else if((strcmp(argv[1],"-i")==0) && (strcmp(argv[3],"-id")==0) && (strcmp(argv[4],"-oc")==0)) {
      input.assign(argv[2]);
      std::string result = neel::numbers::decimalToOctal(input);
      std::cout<<"THe decimal to octal conversion is: "<<result<<std::endl;    
    }
    else if((strcmp(argv[1],"-i")==0) && (strcmp(argv[3],"-io")==0) && (strcmp(argv[4],"-de")==0)) {
      input.assign(argv[2]);
      std::string result = neel::numbers::octalToDecimal(input);
      std::cout<<"THe octal to decimal conversion is: "<<result<<std::endl;    
    }
    else std::cout<<"See help.\n"<<std::endl;
  }
  catch(std::exception& e) {
    std::cerr<<"Caught exception: \n"
             <<e.what();  
  }
  return 0;
}