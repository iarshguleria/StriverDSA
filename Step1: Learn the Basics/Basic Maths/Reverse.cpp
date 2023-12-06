#include <iostream>
using namespace std;

void reverse(int n){

    int count = 0;

    while(n>0){
        int rev_digit = n%10;
        count ++;
        n = n/10;
    }
    cout<<count;
    
}

int main() {
    int n;
    cin >> n;

    reverse(n);

    return 0;
}
