#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables
    int number, reversed_number = 0;
    int digit1, digit2, digit3, digit4;

    // Step 2: Take input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Step 3: Extract individual digits using modulus and division
    digit1 = number % 10;        // Extract last digit
    number /= 10;
    
    digit2 = number % 10;        // Extract second last digit
    number /= 10;
    
    digit3 = number % 10;        // Extract third last digit
    number /= 10;
    
    digit4 = number % 10;        // Extract first digit
    
    // Step 4: Reverse the digits by building the reversed number
    reversed_number = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;

    // Step 5: Output the reversed number
    cout << "Reversed number: " << reversed_number << endl;

    return 0; // Indicate successful execution
}
