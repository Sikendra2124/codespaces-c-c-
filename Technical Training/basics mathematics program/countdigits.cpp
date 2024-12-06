#include <iostream>
using namespace std;

int countdigit(int x) {
    if (x == 0) {
        return 1; // Special case for 0
    }

    int count = 0;
    while (x != 0) {
        x = x / 10; // Remove the last digit
        count++;    // Increment the digit count
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Total digits are: " << countdigit(n) << endl;
    return 0;
}
