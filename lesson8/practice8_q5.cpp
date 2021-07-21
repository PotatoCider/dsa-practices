#include <bitset>
#include <cassert>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

string dec2bin(int dec) {
    if (dec == 0) return "0";
    stack<bool> s;
    while (dec != 0) {
        s.push(dec % 2);
        dec >>= 1;
    }
    string bin;
    while (!s.empty()) {
        bin.push_back(s.top() + '0');
        s.pop();
    }
    return bin;
}

int main() {
    for (int i = 0; i < 1000; i++) {
        string bin = dec2bin(i);
        assert(bitset<32>(i).to_string().substr(32 - bin.size(), 32) == bin);
    }
    return 0;
}