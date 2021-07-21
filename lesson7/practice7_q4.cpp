#include <bitset>
#include <iostream>
#include <list>

using namespace std;

int gcd(int a, int b) {
    int remainder = a % b;
    if (remainder != 0)
        return gcd(b, remainder);
    return b;
}

int main() {
    cout << gcd(-30, 15);
    return 0;
}