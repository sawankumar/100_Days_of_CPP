#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter the elements: ";

    for(int i=0;i<5;i++)
    cin>>arr[i];

    // Minimum element in array
    int min=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Minimum element: "<<(min);

    // Maximun element in array
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<endl<<"Maximum element: "<<(max);

    return 0;
}