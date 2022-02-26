#include <iostream>
#include <cmath>

int isPrime(int n);

int main(){
    int m =1;
    std::cout << "Ingrese numero: \n";
    std::cin >>  m;
    std::cout << isPrime(m) << "\n";
    return 0;
}

//Funcion

int isPrime(int n){
    for (int ii = 2; ii <= std::sqrt(n); ii++){
        if (n%ii == 0){
            return 0;
        }
    }
    return 1;
}
