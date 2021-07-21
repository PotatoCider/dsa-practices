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

void insertionSort(int arr[], int len, bool (*less)(int i, int j)) {
    for (int i = 1; i < len; i++) {
        // assume arr[0...i-1] is sorted.
        // insert arr[i] into sorted region
        int cur = arr[i];

        // shift arr[x...i-1] to arr[x+1...i]
        // where arr[x-1] < cur
        int j;
        for (j = i; j >= 1 && less(cur, arr[j - 1]); j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = cur;
    }
}

bool lessComp(int i, int j) {
    return i < j;
}

bool moreComp(int i, int j) {
    return i > j;
}

void insertionSortAsc(int arr[], int len) {
    insertionSort(arr, len, lessComp);
}

int main() {
    int sorted[] = {-9, -3, -2, 0, 3, 4, 4, 7};
    int array1[] = {-9, 4, 3, -3, 0, -2, 7, 4};
    int array2[] = {-9, 4, 3, -3, 0, -2, 7, 4};
    int array3[] = {-9, 4, 3, -3, 0, -2, 7, 4};
    int size = sizeof(array1) / sizeof(int);
    insertionSortAsc(array1, size);
    for (int i = 0; i < size; i++) {
        cout << array1[i] << ' ';
        assert(sorted[i] == array1[i]);
    }
    cout << endl;

    insertionSort(array2, size, lessComp);
    for (int i = 0; i < size; i++) {
        cout << array2[i] << ' ';
        assert(sorted[i] == array2[i]);
    }
    cout << endl;

    insertionSort(array3, size, moreComp);
    for (int i = 0; i < size; i++) {
        cout << array3[i] << ' ';
        assert(sorted[size - i - 1] == array3[i]);
    }
    cout << endl;

    return 0;
}
