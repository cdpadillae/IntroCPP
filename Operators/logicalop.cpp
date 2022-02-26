#include <iostream>
#include <cmath>
#include <string>

int main(void){

  std::cout << (4==4)&&(2.5>1.0);
  std::string flag = (4>3) ? "Hola" : "No Hola";
  std::cout << flag;
  return 0;
}
