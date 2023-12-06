#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void armstrong(int n){

    int count = 0;
    int original =n;
    int temp =n;
    int numberofdigit = 0;

    while(temp>0){
        numberofdigit++;
        temp = temp/10;
    }

    while(n>0){
        int rev_digit = n%10;
        int cube = pow(rev_digit, numberofdigit );
        count = count + cube;
        n = n/10;
    }
    
    if (count == original){
        cout<< "True";
    }
    else{
        cout<< "False";
    }
    
}

int main() {
    int n;
    cin >> n;

    armstrong(n);

    return 0;
}
