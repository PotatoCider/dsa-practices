#include <iostream>

using namespace std;

double part8(int marks[], double weightage[], int sz);

int main() {
    int marks[4];
    cout << "Enter your marks: ";
    for (int i = 0; i < 4; i++) {
        cin >> marks[i];
    }
    double Weightage1[4] = {0.1, 0.2, 0.3, 0.4};
    double Weightage2[4] = {0.2, 0.2, 0.4, 0.2};
    double total1 = part8(marks, Weightage1, 4);
    double total2 = part8(marks, Weightage2, 4);
    cout << "marks with Weightage1: " << total1 << endl;
    cout << "marks with Weightage2: " << total2 << endl;
    return 0;
}

double part8(int* ptrA, int* ptrB, int sz) {
    double total = 0;
    for (int i = 0; i < sz; i++) {
        total += *(ptrA + i) * *(ptrB + i);
    }
    return total;
}