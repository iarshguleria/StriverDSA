#include<iostream>
using namespace std;

int main(){
    int i;

    // ForLoop
    for (i=0;i<=5;i++){
        cout<<i<<endl;
    }

    // While Loop
    i = 0;

    while(i<=5){
        cout<<i<<endl;
        i++;
    }

    do{
        cout<<i<<endl;
        i++;
    }while(i>0);

    return 0;
}