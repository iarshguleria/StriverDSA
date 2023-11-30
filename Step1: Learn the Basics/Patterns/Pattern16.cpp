#include <iostream>
using namespace std;

// A 
// B B 
// C C C 
// D D D D 

void pattern(int n){
    char num = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
                cout<<num<<" ";
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
