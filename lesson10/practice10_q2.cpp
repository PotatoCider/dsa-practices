#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <string>

using namespace std;

int main() {
    ostream_iterator<int> screen(cout, ", ");
    set<int> s;
    int arr[] = {24, 39, 31, 46, 48, 34, 19, 5, 29};

    for (int i = 0; i < 9; i++) {
        s.insert(arr[i]);
        copy(s.begin(), s.end(), screen);
        cout << endl;
    }
    return 0;
}