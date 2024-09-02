#include <iostream>
using namespace std;
//print the array after inserting the element
int main()
{
    int arr[10]={10,5,23,11,7,17};
    int n=6;
    int value=33;
    int posi=3;
    for(int i= n-1; i>= posi; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[posi]=value;
    n++;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<'\t';
    }
    return 0;
}
