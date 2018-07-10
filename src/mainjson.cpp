#include <iostream>
#include <fstream>
#include <sstream>

#include "json.hpp"


int main(int argc, char **argv){
  std::cout << "test json "<< std::endl;
  std::cout << "open json : " << argv[1] << std::endl;
  std::ifstream in(argv[1]);
  std::stringstream buffer;
  buffer << in.rdbuf();
  std::string params = buffer.str();
  std::cout << "toto : " << getFromJsonInt(params, "toto") << std::endl;
  std::cout << "titi : " << getFromJsonString(params, "titi") << std::endl;
  return 0;
}
