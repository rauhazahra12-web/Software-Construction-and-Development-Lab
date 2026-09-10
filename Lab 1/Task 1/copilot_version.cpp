#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    grade = toupper(grade);

    if (grade == 'A') {
        cout << "Excellent!";
    }
    else if (grade == 'B') {
        cout << "Good!";
    }
    else if (grade == 'C') {
        cout << "Satisfactory!";
    }
    else if (grade == 'D') {
        cout << "Pass!";
    }
    else if (grade == 'F') {
        cout << "Fail!";
    }
    else {
        cout << "Invalid grade!";
    }

    return 0;
}
