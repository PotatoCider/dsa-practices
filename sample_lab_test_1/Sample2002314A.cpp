// Step 1:
// Write your name and admission No.
// Joseph Goh 2002314
// Date: 11/07/2021
// Write the compiler / pre-processor directives here:
#include <iostream>
using namespace std;

int main() {
    double marks[3] = {80.0, 70.0, 100.0};
    double weights[3] = {0.3, 0.3, 0.4};
    double *mPtr = marks;
    double *wPtr = weights;

    double average = 0;
    for (int i = 0; i < 3; i++) {
        average += *(mPtr + i) * *(wPtr + i);
    }
    cout << "Average marks is " << average << endl;
}