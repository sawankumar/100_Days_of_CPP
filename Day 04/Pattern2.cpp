// Printing Pattern

#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        // Print Space 
        for(col=1;col<=n-row;col++)
            cout<<"  ";
        // Print *
        for(col=1;col<=row;col++)
            cout<<"* ";
        cout<<endl;
    }
} 