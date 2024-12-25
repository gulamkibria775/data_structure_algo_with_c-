#include <iostream>

using namespace std;

int main() {
    // Declare two variables to store the numbers
    float num1, num2, sum;

    // Ask the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
