/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
#include <math.h>
using namespace std;

int sq(int n){
    return n * n;
}

int main(){
    
    double c = 0;
    for(int a = 0; a <= 500; a++){
        for(int b = a+1; b<=500; b++){
            c = sqrt(sq(a) + sq(b));
            if(a + b + c == 1000 && a < b < c){
                cout << a*b*c << "\n";
            }
        }
    }
    return 0;
}
