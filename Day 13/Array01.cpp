#include <iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};

    int start=0, last=5;

    while(start<last)
    {
        swap(arr[start],arr[last]);
        start++;
        last--;
    };
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
}