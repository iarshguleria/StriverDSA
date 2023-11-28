#include<iostream>
using namespace std;

int main(){
    // Integer (32bit 4bytes) (10^9)
    int max_number = 2147483657;

    // Long (10^12) LongLong (10^18)
    long x = 83;
    long long y = 45678765; 

    //Float 
    float a = 3.4;
    float b = 4;

    //Double
    double c = 5.243;

    //String and getline [to print space also]
    string str;
    getline(cin, str);
    cout << str;

    //Character
    char ch = 'h';

    return 0;
}