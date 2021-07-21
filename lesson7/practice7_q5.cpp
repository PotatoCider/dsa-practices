#include <bitset>
#include <iostream>
#include <list>

using namespace std;

bool isPrime(int p) {
    // if (p == 1) return false;
    for (int x = 2; x * x <= p; x++) {
        if (p % x == 0) return false;
    }
    return true;
}

int main() {
    cout << "prime: " << isPrime(4) << endl;
    return 0;
}