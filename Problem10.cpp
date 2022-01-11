/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() {

    long sum = 0;
    for(long i = 0; i <= 2000000; i++){
        if(isPrime(i) == true){
            sum += i;
        }
    }

    cout << sum;
    return 0;
}
