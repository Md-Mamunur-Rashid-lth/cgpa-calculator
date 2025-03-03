#include <iostream>
using namespace std;

int main() {
    float gpa, credits, total_credits = 0, total_points = 0;
    int num_courses;
    
    cout << "Enter number of courses: ";
    
    // Ensure input is taken correctly for num_courses
    while (!(cin >> num_courses) || num_courses <= 0) {
        cout << "Please enter a valid number of courses (positive integer): ";
        cin.clear();  // Clear error flag
        cin.ignore(10000, '\n');  // Ignore invalid input (replace numeric_limits)
    }

    for (int i = 0; i < num_courses; i++) {
        cout << "Enter GPA and credits for course " << i + 1 << ": ";
        
        // Ensure both GPA and credits are entered correctly
        while (!(cin >> gpa >> credits) || gpa < 0 || credits < 0) {
            cout << "Invalid input. Please enter valid GPA and credits (positive values): ";
            cin.clear();
            cin.ignore(10000, '\n');  // Ignore invalid input
        }
        
        total_credits += credits;
        total_points += gpa * credits;
    }

    if (total_credits > 0)
        cout << "CGPA: " << total_points / total_credits << endl;
    else
        cout << "No credits entered. CGPA cannot be calculated.\n";

    return 0;
}
