#include <iostream>
using namespace std;
//print the array after removing the element
int main()
{
    int arr[ ]={10 ,5 ,23 ,11 ,7 ,17};
    int n=6;
    int posi= 2;
   for(int i=posi; i<n; i++)
    {
    arr[i-1]=arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
       cout<<arr[i]<<'\t';
    }
    return 0;
 }
