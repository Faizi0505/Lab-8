#include <iostream>

using namespace std;

int main() {
    // Step 1: Declare variables for initial velocity, acceleration, time, and final velocity
    int initial_velocity, acceleration, time, final_velocity;

    // Step 2: Take initial velocity input from the user
    cout << "Enter the initial velocity of the car (in m/s): ";
    cin >> initial_velocity;

    // Step 3: Take acceleration input from the user
    cout << "Enter the acceleration of the car (in m/s^2): ";
    cin >> acceleration;

    // Step 4: Take time input from the user
    cout << "Enter the time for which the car accelerated (in seconds): ";
    cin >> time;

    // Step 5: Calculate final velocity using the formula
    final_velocity = initial_velocity + (acceleration * time);

    // Step 6: Display the result
    cout << "The final velocity of the car is: " << final_velocity << " m/s" << endl;

    return 0; // Indicate successful execution
}
