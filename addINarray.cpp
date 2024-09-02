#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Input 10 elements
    cout << "Array before adding 5:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Add 5 to each element
    for(int i = 0; i < 10; i++)
    {
        arr[i] += 5;
    }

    // Print the array after adding 5
    cout << "Array after adding 5:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}
