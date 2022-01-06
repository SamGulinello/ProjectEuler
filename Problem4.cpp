/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>
#include <string>
using namespace std;

bool isPal(string n) {

    int l = n.length();
    
    for(int i = 0; i < l / 2; i++){
        if(n[i] != n[l - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int flag = 0;

    for(int i = 100; i <= 1000; i++) {
        for(int j = 100; j <= 1000; j++){
            long prod = i*j;
            string nStr = to_string(prod);

            if(isPal(nStr) == true) {
                if(prod > flag) {
                    flag = prod;
                }
            }
        }
    }

    cout << flag;

    return 0;
}