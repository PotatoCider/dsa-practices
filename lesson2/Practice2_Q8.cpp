// Practice 2.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;
double compute(int *marks, double *weightage);
int main() {
    int marks[4];
    int choice;
    int *ptrA;
    double *ptrB;
    double Weightage1[4] = {0.1, 0.2, 0.3, 0.4};
    double Weightage2[4] = {0.2, 0.2, 0.4, 0.2};
    double result;

    //write your code to ask user to enter 4 marks using for loop
    for (int i = 0; i < 4; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];
    }

    ptrA = marks;
    cout << "Please enter 1 or 2 for weightage1 or weightage2 respectively :";
    cin >> choice;

    if (choice == 1)  //fill in the blank
    {
        ptrB = Weightage1;
        result = compute(ptrA, ptrB);
    } else {
        ptrB = Weightage2;             // fill in the blank
        result = compute(ptrA, ptrB);  // fill in the blank
    }

    cout << "The result is : " << result << endl;
    return 0;
}
double compute(int *marks, double *weightage) {
    double result = 0;
    for (int i = 0; i < 4; i++) {
        result = result + *(marks + i) * *(weightage + i);
    }
    return result;
}
