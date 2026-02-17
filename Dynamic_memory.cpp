#include <iostream>

using namespace std;

int main() {
    int numStudents;

    // Step 1: Input Validation
    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Error: Invalid number of students. Exiting program." << endl;
        return 1; // Return non-zero indicates error
    }

    // Step 2: Dynamic Memory Allocation
    int* marks = new (nothrow) int[numStudents];

    // Check if memory was successfully allocated
    if (marks == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    // Step 3: Input Data
    cout << "Enter marks for " << numStudents << " students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
    }

    // Step 4: Logic Processing (Min, Max, Average)
    int maxScore = marks[0]; // Assume first element is max
    int minScore = marks[0]; // Assume first element is min
    int sum = 0;

    for (int i = 0; i < numStudents; i++) {
        sum += marks[i];

        if (marks[i] > maxScore) {
            maxScore = marks[i];
        }
        if (marks[i] < minScore) {
            minScore = marks[i];
        }
    }

    double average = static_cast<double>(sum) / numStudents;

    // Step 5: Output Results
    cout << "\n--- Class Statistics ---" << endl;
    cout << "Total Students: " << numStudents << endl;
    cout << "Average Score : " << average << endl;
    cout << "Highest Score : " << maxScore << endl;
    cout << "Lowest Score  : " << minScore << endl;

    // Step 6: Critical - Memory Deallocation
    delete[] marks;
    marks = nullptr;

    cout << "\nMemory successfully released." << endl;

    return 0;
}