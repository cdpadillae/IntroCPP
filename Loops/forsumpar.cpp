#include <iostream>
#include <cmath>

int main (){
    double sum = 0.0;
    for(int n = 0; n <=100; n++){
        if (n%2 == 0){
            sum += n;
        }
    }
    std::cout << "La suma es " << sum << "\n";
    return 0;
}
