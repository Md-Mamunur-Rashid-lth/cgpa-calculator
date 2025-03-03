#include <iostream>
using namespace std;

int main() {
    float gpa, credits, total_credits = 0, total_points = 0;
    int num_courses;
    
    cout << "Enter number of courses: ";
    cin >> num_courses;

    for (int i = 0; i < num_courses; i++) {
        cout << "Enter GPA and credits for course " << i + 1 << ": ";
        cin >> gpa >> credits;
        total_credits += credits;
        total_points += gpa * credits;
    }

    if (total_credits > 0)
        cout << "CGPA: " << total_points / total_credits << endl;
    else
        cout << "No credits entered. CGPA cannot be calculated.\n";

    return 0;
}
