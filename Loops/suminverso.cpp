#include <iostream>
#include <cmath>

int main(){
    double sum = 0;
    double  n = 1.0; //Inicio
    const int MMAX = 5;
    while (n<=MMAX){  //Condicion de repeticion
        sum += 1.0/n;
        n += 1; // condición de cambio
    }
    std::cout << sum << "\n";
    return 0;
}
