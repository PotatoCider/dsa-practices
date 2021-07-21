#include <bitset>
#include <iostream>
#include <list>

using namespace std;

void convert(int num, int base) {
    list<int> digits;
    while (num > 0) {
        digits.push_front(num % base);
        num /= base;
    }
    for (auto it = digits.begin(); it != digits.end(); it++) {
        cout << *it;
    }
    cout << '\n';
}

int main() {
    convert(69, 2);
    return 0;
}