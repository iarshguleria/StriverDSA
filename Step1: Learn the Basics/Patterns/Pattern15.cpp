#include <iostream>
using namespace std;

// A B C D 
// A B C 
// A B 
// A 


void pattern(int n){
    for (int i = 1; i <= n; i++)
    {
        char num = 'A';
        for (int j = n; j >=i; j--)
        {
                cout<<num<<" ";
                num++;
        }
        cout<<endl;
    }  
}

int main() {
    int n;
    cin >> n;

    pattern(n);

    return 0;
}
