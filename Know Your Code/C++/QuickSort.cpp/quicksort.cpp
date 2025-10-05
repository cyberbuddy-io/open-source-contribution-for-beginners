#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high]; // choose the last element as pivot
    int i = low - 1;       // pointer for smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1; // return pivot index
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partition index
        quickSort(arr, low, pi - 1);        // sort left part
        quickSort(arr, pi + 1, high);       // sort right part
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
