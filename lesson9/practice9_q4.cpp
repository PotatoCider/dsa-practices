#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

bool neg(int t) {
    return t < 0;
}

bool largerthan10(int t) {
    return t > 10;
}

int main() {
    int is[] = {5, 1, 3, -4, 10, 420, 5, -1, 23, 69};
    vector<int> i(is, is + 10);
    vector<int>::iterator n = find_if(i.begin(), i.end(), neg);
    vector<int>::iterator l = find_if(i.begin(), i.end(), largerthan10);
    assert(*n == -4);
    assert(*l == 420);
    return 0;
}
