#include <iostream>

using namespace std;

int main() {
    // Simulating limited memory using MA1, MA2, and MA3
    int MA1, MA2, MA3;

    // Step 1: Input values for a, b, and c
    cout << "Enter value for a: ";
    cin >> MA1; // MA1 holds 'a'
    cout << "Enter value for b: ";
    cin >> MA2; // MA2 holds 'b'
    cout << "Enter value for c: ";
    cin >> MA3; // MA3 holds 'c'

    // Step 2: Compute b + c and temporarily store in MA2
    MA2 = MA2 + MA3; // MA2 = b + c

    // Step 3: Compute a * (b + c) and store in MA1
    MA1 = MA1 * MA2; // MA1 = a * (b + c)

    // Step 4: Restore c by subtracting MA2 with b to get original c
    MA2 = MA2 - MA3; // Now MA2 holds 'b' again
    int temp_c = MA3; // MA3 still holds 'c'

    // Step 5: Compute a + c and store in MA3 temporarily
    MA3 = temp_c + MA2; // MA3 = a + c

    // Step 6: Compute c * (a + c) in MA3
    MA3 = temp_c * MA3; // MA3 = c * (a + c)

    // Step 7: Compute final result by adding MA1 and MA3
    int result = MA1 + MA3; // (a * (b + c)) + (c * (a + c))

    // Step 8: Print the result
    cout << "The result of the expression is: " << result << endl;

    return 0; // Indicate successful execution
}
