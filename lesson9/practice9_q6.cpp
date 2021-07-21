#include <cassert>
#include <iostream>

using namespace std;

template <typename T>
void swap(T arr[], int i, int j) {
    T tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void print(int arr[], int len) {
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

void insertionSort(int arr[], int len, bool dsc) {
    for (int i = 1; i < len; i++) {
        // assume arr[0...i-1] is sorted.
        // insert arr[i] into sorted region
        int cur = arr[i];

        // shift arr[x...i-1] to arr[x+1...i]
        // where arr[x-1] < cur
        int j;
        for (j = i; j >= 1 && (cur < arr[j - 1]) ^ dsc; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = cur;
    }
}

int main() {
    int sorted[] = {2, 3, 4, 9, 11, 17, 23, 35, 42, 56, 89, 100};
    int array1[] = {23, 3, 56, 89, 2, 42, 9, 11, 100, 35, 4, 17};
    int size = sizeof(array1) / sizeof(int);
    insertionSort(array1, size, true);
    for (int i = 0; i < size; i++) {
        cout << array1[i] << ' ';
        assert(sorted[size - i - 1] == array1[i]);
    }
    cout << endl;
    return 0;
}
