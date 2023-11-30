#include <iostream>
using namespace std;

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

void pattern(int n){
    int secoundspace = 2*n-2;
    for (int i = 0; i <2*n; i++)
    {
        if (i<n){
            for (int j = 1; j <n-i+1; j++)
            {
                cout<<"*";
            }

            for (int j = 1; j <i*2+1; j++)
            {
                cout<<" ";
            }

            for (int j = 1; j <n-i+1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for (int j = 0; j <(i+1)-n; j++)
            {
                cout<<"*";
            }

            for (int j = 0; j < secoundspace; j++)
            {
                cout<<" ";
            }

            for (int j = 0; j <(i+1)-n; j++)
            {
                cout<<"*";
            }
            cout<<endl;  
            secoundspace -= 2;   
        }
    
    }
}

int main() {
    int n;
    cin >> n;

    pattern(n);

    return 0;
}
