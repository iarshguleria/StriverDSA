#include <iostream>
using namespace std;

// E 
// D E 
// C D E 
// B C D E 
// A B C D E 

void pattern(int n){
    for (int i = 1; i <= n; i++)
    {
        char num = 'A'+(n-i);
        for (int j = 1; j <= i; j++)
        {
                cout<<num<<" ";
                num++;
        }
        num++;
        cout<<endl;
    }  
}

int main() {
    int n;
    cin >> n;

    pattern(n);

    return 0;
}


// E 
// E D 
// E D C 
// E D C B 
// E D C B A 

// void pattern(int n){
//     for (int i = 1; i <= n; i++)
//     {
//         char num = 'A'+ n-1;
//         for (int j = 1; j <= i; j++)
//         {
//                 cout<<num<<" ";
//                 num--;
//         }
//         cout<<endl;
//     }  
// }