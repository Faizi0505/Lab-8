#include <iostream> // Include the library for input and output

using namespace std; // Use the standard namespace

int main() {
    // Step 1: Start
    
    // Step 2: Print "Enter value in usd"
    cout << "Enter value in USD: ";
    
    // Step 3: Input USD
    float usd;
    cin >> usd;
    
    // Step 4: Convert USD to PKR
    float pkr = usd * 170; // Assuming 1 USD = 170 PKR
    
    // Step 5: Print PKR
    cout << "Value in PKR: " << pkr << endl;
    
    // Step 6: Stop
    return 0; // Indicate the program ended successfully
}
