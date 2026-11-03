#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, score[100], sum = 0;
    string name[100];

    cout << "Enter number of students (1-100): ";
    cin >> n;

    if(n < 1 || n > 100) {
        cout << "Invalid number of students!";
        return 0;
    }

    // Input student details
    for(int i = 0; i < n; i++) {
        cout << "\nEnter student name: ";
        cin >> name[i];

        cout << "Enter student score: ";
        cin >> score[i];

        if(score[i] < 0 || score[i] > 100) {
            cout << "Invalid score! Enter 0-100.";
            return 0;
        }

        sum += score[i];
    }

    // Calculate average
    cout << "\nAverage score: " << (double)sum / n << endl;

    // Display grades
    cout << "\n--- Student Grades ---\n";

    for(int i = 0; i < n; i++) {
        cout << name[i] << " got ";

        if(score[i] >= 90) cout << "A";
        else if(score[i] >= 80) cout << "B";
        else if(score[i] >= 70) cout << "C";
        else cout << "F";

        cout << endl;
    }

    return 0;
}
