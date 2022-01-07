/* 
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 ... 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1+2+...10)^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 
3025-385=2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace std;

// Function to return the sum of the squares of 1 to n
int sumSquare(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i*i;
    }

    return sum;
}

// Function to return the sum of 1 to n squared
int squareSum(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum * sum;
}

int main() {
    cout << squareSum(100) - sumSquare(100);
    return 0;
}
