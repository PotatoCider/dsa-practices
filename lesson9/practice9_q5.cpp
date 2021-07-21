#include <cassert>
#include <iostream>

using namespace std;

template <typename T>
void swap(T arr[], int i, int j) {
    T tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

// void scuffedSelectionSort(int arr[], int len, bool asc) {
//     for (int i = 0; i < len; i++) {
//         for (int j = i + 1; j < len; j++) {
//             if ((arr[i] < arr[j]) ^ asc)
//                 swap(arr, i, j);
//         }
//     }
// }

void bubbleSort(int arr[], int len, bool dsc) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < len; i++) {
            if ((arr[i - 1] > arr[i]) ^ dsc) {
                sorted = false;
                swap(arr, i - 1, i);
            }
        }
    }
}

int main() {
    int sorted[] = {2, 3, 4, 9, 11, 17, 23, 35, 42, 56, 89, 100};
    int array1[] = {23, 3, 56, 89, 2, 42, 9, 11, 100, 35, 4, 17};
    int size = sizeof(array1) / sizeof(int);

    bubbleSort(array1, size, true);
    for (int i = 0; i < size; i++) {
        cout << array1[i] << ' ';
        assert(sorted[size - i - 1] == array1[i]);
    }
    cout << endl;
    return 0;
}
