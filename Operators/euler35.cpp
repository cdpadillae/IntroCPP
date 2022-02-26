#include <iostream>
#include <cmath>


int main (void) {

    const int MMAX = 10;
    int suma = 0;
    for(int ii = 0; ii < MMAX; ii++){
        if(ii%3 == 0 || ii%5 == 0){
            suma += ii;
        }
    }
    std::cout << suma;
    return 0;
}
