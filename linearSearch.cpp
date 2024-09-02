#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) 
{
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i; // Element found, return its index
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10; //search this element
    int n = 5;
    int result = linearSearch(arr, n, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not present in array" << endl;
    return 0;
}

