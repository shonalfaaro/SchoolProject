#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int sum = 0;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}
