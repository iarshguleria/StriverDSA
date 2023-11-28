#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: "<< endl;
    cin >> n;

    int evenSum = 0, oddSum = 0;

    // Loop through each digit of the number
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        if (digit % 2 == 0) {
            evenSum += digit; // Add even digit to evenSum
        } else {
            oddSum += digit; // Add odd digit to oddSum
        }
        n /= 10; // Remove the last digit from the number
    }

    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Sum of odd digits: " << oddSum << endl;

    return 0;
}
