// Printing prime numbers

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<2)
    {
        cout<<"Not Prime";
        return 0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"Not Prime";
                return 0;
            }                
        }
        cout<<"Prime";
    }

}