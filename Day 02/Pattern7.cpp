// Printing pattern

#include<iostream>
using namespace std;

int main()
{
    int row;
    char col = 'a';
    for(row=1;row<=5;row++)
    { 
        for(col='a';col<='e';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}