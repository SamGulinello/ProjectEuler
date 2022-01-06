/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

bool isSolution(int n) {
    for(int i = 1; i <= 20; i++){
        if(n % i != 0){
            return false;
        }
    }
    return true;
}

int main(){

    int result = 20;
    int flag = 0;

    while(flag == 0){
        if(isSolution(result) == true){
            flag = 1;
            cout << result << "\n";
        }
        result++;
    }

}