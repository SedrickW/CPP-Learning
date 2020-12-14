
#include <iostream>

using namespace std;

int main()
{
    /*
    int minTotal; // User input: Minutes
    int hrs      , minRem; // Hours, & min remaining
    int min1;
    int min2;

    cout << "Enter minutes: ";
    cin >> min1;
    cout << "\nEnter second minutes: ";
    cin >> min2;

    minTotal = min1 + min2;

    hrs = minTotal / 60;
    minRem = minTotal % 60;
  
    cout << endl << minTotal << " minutes is ";
    cout << hrs << " hours and ";
    cout << minRem << " minutes.\n";
    */
    
    double exam1Grade, exam2Grade, exam3Grade;
    double overallExamGrade = 1;

    double programing1Grade, programing2Grade, programing3Grade, programing4Grade;
    double overallProgramingGrade = 2;

    double overallGradeAvg = 3;

    cout << "Enter score on Exam 1 (out of 100): ";
    cin >> exam1Grade;

    cout << "Enter score on Exam 2 (out of 100): ";
    cin >> exam2Grade;

    cout << "Enter score on Exam 3 (out of 100): ";
    cin >> exam3Grade;

    overallExamGrade = (exam1Grade + exam2Grade + exam3Grade) / 3.0;

    cout << "Your overall exam grade is: " << overallExamGrade <<" %"<< endl << endl;



    cout << "Enter score on Programing Assignment 1 (out of 50): ";
    cin >> programing1Grade;

    cout << "Enter score on Programing Assignment 2 (out of 50): ";
    cin >> programing2Grade;

    cout << "Enter score on Programing Assignment 3 (out of 50): ";
    cin >> programing3Grade;

    cout << "Enter score on Programing Assignment 4 (out of 50): ";
    cin >> programing4Grade;

    overallProgramingGrade = 2 * (programing1Grade + programing2Grade + programing3Grade + programing4Grade) / 4.0; //mutiplied by 2 inorder to make the scores out of 100 not 50

    cout << "Your overall grade is: " << overallProgramingGrade << " %" << endl << endl;

    overallGradeAvg = overallExamGrade * 0.6 + overallProgramingGrade * 0.4;

    cout << "Your overall grade is " << overallGradeAvg <<" %";

    return 0;
}