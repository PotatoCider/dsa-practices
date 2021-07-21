#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T>
int seq_search(T t[], int len, T elem) {
    for (int i = 0; i < len; i++) {
        if (t[i] == elem) return i;
    }
    return -1;
}

template <typename T>
int bin_search(T t[], int len, T elem) {
    int start = 0;
    int end = len - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (t[mid] == elem) return mid;
        if (t[mid] > elem) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {1, 3, 5, 10, 112, 123, 230, 420, 569, 69420};
    for (int i = 0; i < 10; i++) {
        assert(bin_search(arr, 10, arr[i]) == i);
        assert(seq_search(arr, 10, arr[i]) == i);
    }
    return 0;
}
