// Printing Pattern

#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the number: ";
    cin>>n; 
    for(row=n;row>=1;row--)
    {
        // Print *
        for(col=1;col<=row;col++)
            cout<<"* ";

        // Print Space
        for(col=1;col<=2*n-2*row;col++)
            cout<<"  ";

        // Print *
        for(col=1;col<=row;col++)
            cout<<"* ";

        cout<<endl;
    }
    for(row=1;row<=n;row++)
    {
        // Print *
        for(col=1;col<=row;col++)
            cout<<"* ";

        // Print Space
        for(col=1;col<=2*n-2*row;col++)
            cout<<"  ";

        // Print *
        for(col=1;col<=row;col++)
            cout<<"* ";

        cout<<endl;
    }
}