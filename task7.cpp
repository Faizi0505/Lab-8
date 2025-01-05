#include <iostream>

using namespace std;

int main() {
    // Step 1: Declare variables
    string student_name;
    int subject1, subject2, subject3, subject4, subject5;
    int total_marks = 500; // Maximum total marks
    int obtained_marks;    // Sum of all subject marks
    float percentage;      // Calculated percentage

    // Step 2: Input the student's name
    cout << "Your Name: ";
    cin >> student_name;  // Using cin to input a single word name

    // Step 3: Input marks for 5 subjects
    cout << "Enter marks for subject 1: ";
    cin >> subject1;
    cout << "Enter marks for subject 2: ";
    cin >> subject2;
    cout << "Enter marks for subject 3: ";
    cin >> subject3;
    cout << "Enter marks for subject 4: ";
    cin >> subject4;
    cout << "Enter marks for subject 5: ";
    cin >> subject5;

    // Step 4: Calculate total obtained marks and percentage
    obtained_marks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (obtained_marks / 500.0) * 100;

    // Step 5: Display the student's name and percentage
    cout << "Student Name: " << student_name << endl;
    cout << "Total Obtained Percentage: " << percentage << "%" << endl;

    return 0; // Indicate successful execution
}
