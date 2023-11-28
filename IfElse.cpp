#include<iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if (marks < 25){
        cout<<"C";
    }
    else if (marks >= 25 && marks <=75){
        cout<<"B";
    }
    else{
        cout<<"A";
    }

    return 0;
}