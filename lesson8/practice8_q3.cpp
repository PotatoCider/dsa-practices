#include <cassert>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> myStack;
    myStack.push("first");
    myStack.push("second");
    myStack.push("third");
    myStack.push("fourth");
    cout << "size of stack: " << myStack.size() << endl;
    while (!myStack.empty()) {
        myStack.pop();
    }
    assert(myStack.size() == 0);
    return 0;
}