#include <bitset>
#include <iostream>
#include <list>

using namespace std;

void d2b(int num) {
    // if (num < 2) cout << num;
    list<int> bits;
    while (num > 0) {
        bits.push_front(num % 2);
        num /= 2;
    }
    for (auto it = bits.begin(); it != bits.end(); it++) {
        cout << *it;
    }
    cout << '\n';
}

int main() {
    d2b(69);
    return 0;
}