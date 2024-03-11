#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) // Changed i <= n to i < n
    {
        cin >> arr[i];
    }

    for(int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for(int j = 0; j <= i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
