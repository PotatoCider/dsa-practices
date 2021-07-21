#include <cassert>
#include <cctype>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalidrome(string str) {
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
        s.push(str[i]);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') continue;
        while (s.top() == ' ') s.pop();

        if (tolower(str[i]) != tolower(s.top())) return false;
        s.pop();
    }
    return true;
}

int main() {
    assert(isPalidrome("civic") == 1);
    assert(isPalidrome("rotor") == 1);
    assert(isPalidrome("Malayalam") == 1);
    assert(isPalidrome("Madam Im Adam") == 1);
    return 0;
}