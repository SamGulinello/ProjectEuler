/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <bits/stdc++.h>
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
    int index = 0;
    long num = 0;

    while(index != 10001){
        if(isPrime(num) == true){
            index++;
        }
        num++;
    }

    cout << num -1;
    return 0;

    cout << isPrime(1299708);

}