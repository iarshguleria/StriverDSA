#include <iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// Optimized
        // int spaces = 2*n-2;
        // for(int i = 1;i<=2*n-1;i++){
          
        //   int stars = i;
          
        //   if(i>n) stars = 2*n - i;
          
        //   for(int j=1;j<=stars;j++){
        //       cout<<"*";
        //   }
          
        //   for(int j = 1;j<=spaces;j++){
        //       cout<<" ";
        //   }
          
        //   for(int j = 1;j<=stars;j++){
        //       cout<<"*";
        //   }
        
        //   cout<<endl;
        //   if(i<n) spaces -=2;
        //   else spaces +=2;
        //  }

void pattern(int n){
    int secoundspace = 2*n-2;
    for (int i = 0; i <2*n-1; i++)
    {
        if (i<n){
            for (int j = 0; j <= i; j++)
            {
                cout<<"*";
            }

            for (int j = 0; j < secoundspace; j++)
            {
                cout<<" ";
            }

            for (int j = 0; j <= i; j++)
            {
                cout<<"*";
            }
            secoundspace -= 2;   
            cout<<endl;
        }
        else{
            for (int j = 1; j <2*n-i; j++)
            {
                cout<<"*";
            }

            for (int j = 0; j < 2*i + 2 -2*n; j++)
            {
                cout<<" ";
            }

            for (int j = 1; j <2*n-i; j++)
            {
                cout<<"*";
            }
            cout<<endl;  
        }
    
    }
}

int main() {
    int n;
    cin >> n;

    pattern(n);

    return 0;
}
