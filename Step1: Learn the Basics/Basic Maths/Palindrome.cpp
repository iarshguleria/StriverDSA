#include <iostream>
using namespace std;

void palindrome(int n){

    int count = 0;

    int original =n;

    while(n>0){
        int rev_digit = n%10;
        count = count *10 + rev_digit;
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

    palindrome(n);

    return 0;
}
