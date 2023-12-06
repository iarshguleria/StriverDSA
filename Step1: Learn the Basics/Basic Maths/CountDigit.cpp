#include <iostream>
using namespace std;

void countDigit(int n){

    int count = 0;

    while(n>0){
        count ++;
        n = n/10;
    }

    // int count = (int)(log10(n)+1);
    // Also converting it to string and then counting is one method

    cout<<count;
    
}

int main() {
    int n;
    cin >> n;

    countDigit(n);

    return 0;
}
