#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables
    float bag_size_in_pounds, bag_cost, area_covered_in_square_feet;
    float cost_per_pound, cost_per_square_foot;

    // Step 2: Input values
    cout << "Enter the size of the fertilizer bag in pounds: ";
    cin >> bag_size_in_pounds;

    cout << "Enter the cost of the fertilizer bag: ";
    cin >> bag_cost;

    cout << "Enter the area in square feet that can be covered by the bag: ";
    cin >> area_covered_in_square_feet;

    // Step 3: Calculate the cost per pound and cost per square foot
    cost_per_pound = bag_cost / bag_size_in_pounds;
    cost_per_square_foot = bag_cost / area_covered_in_square_feet;

    // Step 4: Output the results
    cout << "Cost of fertilizer per pound: " << cost_per_pound << endl;
    cout << "Cost of fertilizing per square foot: " << cost_per_square_foot << endl;

    return 0; // Indicate successful execution
}
