/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
using namespace std;

bool isPrime(long long int n)
{
    static int i = 2;
 
    if (n == 0 || n == 1) {
        return false;
    }
 
    if (n == i)
        return true;

    if (n % i == 0) {
        return false;
    }
    i++;
    return isPrime(n);
}

int main() {
    long long int n = 600851475143;
    
    for(long long int l = 2; l <= n; l++){
        if(n % l == 0 and isPrime(l)){
            cout << l;
            cout << "\n";
        }
    } 
    return 0;
}

