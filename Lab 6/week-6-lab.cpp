#include <iostream>

using namespace std;

char grade;
int score;

int main() {

    cout << "Please input your grade: " << endl;
    cin  >> score;

    if (score >= 86)
    {
        grade = 'A';
        cout << "Your grade is: " << grade << endl;
    }

    else if (score >= 72)
    {
        grade = 'B';
        cout << "Your grade is: " << grade << endl;
    }

    else if (score >= 60)
    {
        grade = 'C';
        cout << "Your grade is: " << grade << endl;
    }

    else if (score >= 50)
    {
        grade = 'D';
        cout << "Your grade is: " << grade << endl;
    }

    else
    {
        grade = 'F';
        cout << "Your grade is: " << grade << endl;
    }
    return 0;
}