#include <array>
#include <iostream>

using namespace std;

int main() {
    const int sz = 10;
    int marks[sz] = {3, 8, 4, 9, 5, 9, 4, 3, 1, 7};
    double avg = 0;
    // for (int i = 0; i < sz; i++) {
    //     avg += marks[i];
    // }
    int i = 0;
    while (i < sz) {
        avg += marks[i];
        i++;
    }

    avg /= sz;
    cout << "Average: " << avg << endl;
    return 0;
}