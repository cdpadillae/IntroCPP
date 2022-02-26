#include <iostream>
#include <cmath>

int main (void){

  double x = 9.7, y = -1.87;
  double z = 0;
  z = x + y;
  std::cout << z << "\n";
  z = x - y;
  std::cout << z << "\n";
  z = x * y;
  std::cout << z << "\n";
  z = x / y;
  std::cout << z << "\n";
  int m = 9/4;
  std::cout << m << "\n";
  // En 9/4 hay truncamiento, es decir se va a 2.
  int ii = 3, jj =0;
  jj = ++ii;
  std::cout << ii <<"y jj " << jj << std::endl;

  ii = 3; jj =0;
  jj = ii++;
  std::cout << ii <<"y jj " << jj << std::endl;

  return 0;
}
