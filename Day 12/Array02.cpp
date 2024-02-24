#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    // Enter Array Elements
    cout<<"Enter Array Elements: ";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    //cout<<arr[500];
    // Printing Array Elements
    cout<<"Print Array Elements: ";
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

    // Size of Array
    cout<<endl<<"Size of Array: ";
    cout<<sizeof(arr);

    // Number of elements in array 
    cout<<endl<<"No. of elements in array: "<<sizeof(arr)/sizeof(arr[0]);

    return 0;
}