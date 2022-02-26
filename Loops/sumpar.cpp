#include <iostream>
#include <cmath>

int main(){
    int suma = 0;
    int n = 0;
    while (n <= 100){
        if (n%2 == 0){
            suma += n;
        }
        n += 1;
    }
    std::cout << (suma);
    return 0;
}
