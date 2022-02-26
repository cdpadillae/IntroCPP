#include <iostream>
#include <cmath>

/*
  Tenemos un numero long long 
  Calcular los divisores primos: Calcular divisor y saber si es primo
  Encuentra el mayor divisor primo.
 */

int main(void){

    const long long N = 600851475143;
    for(long long int ii = 2; ii<N; ii++){
        if (N%ii == 0){
            //Aqui falta verificar si es primo
            //std::cout << N/ii << "\n";
            //break; //Este break mata al for
            long long largedivisor = N/ii;
            //std::cout << largedivisor << "\n";
            bool isPrime = true;
            for(long long jj=2; jj <= std::sqrt(largedivisor); jj++){
              if(largedivisor%jj == 0){
                  isPrime = false;
                  break;
              }
            }
            if(isPrime){
               std::cout << largedivisor;
               break;
            }
        }
        
    }

    return 0;
}
