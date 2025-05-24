#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > 0 && num2 > 0) {
        if (num1 == num2) {
            cout << "The numbers are equal." << endl;
        } else {
            cout << "The first number is greater than the second number." << endl;
        }
    } else {
        cout << "At least one of the numbers is not positive." << endl;
    }
    return 0;
}
