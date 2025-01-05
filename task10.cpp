#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables
    int number, sum = 0;

    // Step 2: Take input from the user (4-digit number)
    cout << "Enter a 4-digit number: ";
    cin >> number;

    // Step 3: Sum the individual digits using modulus and division
    sum += number % 10;       // Add last digit
    number /= 10;             // Remove last digit

    sum += number % 10;       // Add second last digit
    number /= 10;             // Remove last digit

    sum += number % 10;       // Add third last digit
    number /= 10;             // Remove last digit

    sum += number % 10;       // Add fourth last digit

    // Step 4: Output the sum of the digits
    cout << "Sum of individual digits: " << sum << endl;

    return 0; // Indicate successful execution
}
