#include <iostream>

using namespace std;

int main() {
    // Step 1: Declare variables for length, width, and area as integers
    int length, width, area;

    // Step 2: Prompt user for the length of the fence
    cout << "Enter the length of the fence in feet: ";
    cin >> length;

    // Step 3: Prompt user for the width of the fence
    cout << "Enter the width of the fence in feet: ";
    cin >> width;

    // Step 4: Calculate the area using the formula
    area = length * width;

    // Step 5: Output the area
    cout << "The area of the fence is: " << area << " square feet" << endl;

    return 0; // Indicate successful execution
}
