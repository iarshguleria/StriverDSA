#include<iostream>
using namespace std;

//Pass by Value (A copy is being send)
void passValue(int num){
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
}

int main(){
    int n =5;
    passValue(n);
    cout<<n;
}

//Pass by Value (Original value is being send, by sending the address)
void passValue(int &num){
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
}

int main(){
    int n =5;
    passValue(n);
    cout<<n;
}

// Array are by default passed by reference