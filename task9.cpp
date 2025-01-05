#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables
    int numbers[15];
    int sum = 0, product = 1, difference = 0;
    int final_result;

    // Step 2: Input 15 numbers manually
    cout << "Enter 15 numbers:" << endl;

    // First 5 numbers to add
    cin >> numbers[0]; sum += numbers[0];
    cin >> numbers[1]; sum += numbers[1];
    cin >> numbers[2]; sum += numbers[2];
    cin >> numbers[3]; sum += numbers[3];
    cin >> numbers[4]; sum += numbers[4];

    // Next 5 numbers to multiply
    cin >> numbers[5]; product *= numbers[5];
    cin >> numbers[6]; product *= numbers[6];
    cin >> numbers[7]; product *= numbers[7];
    cin >> numbers[8]; product *= numbers[8];
    cin >> numbers[9]; product *= numbers[9];

    // Last 5 numbers to subtract
    cin >> numbers[10]; difference = numbers[10];
    cin >> numbers[11]; difference -= numbers[11];
    cin >> numbers[12]; difference -= numbers[12];
    cin >> numbers[13]; difference -= numbers[13];
    cin >> numbers[14]; difference -= numbers[14];

    // Step 3: Calculate the final result (sum + product - difference)
    final_result = sum + product - difference;

    // Step 4: Output the final result
    cout << "Final result: " << final_result << endl;

    return 0; // Indicate successful execution
}
