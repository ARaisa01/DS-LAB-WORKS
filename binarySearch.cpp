#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid point
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 4, 5, 9};
    int target = 4;
    int size = sizeof(arr);
    int result = binarySearch(arr, 0, size - 1, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
