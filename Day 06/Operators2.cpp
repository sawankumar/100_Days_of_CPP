#include<iostream>
using namespace std;

int main()
{   
    // Logical Operators: && ||
    //int x,y,z;
    char m;
    /*
    cout<<"Enter x,y and z: ";
    cin>>x>>y>>z;

    if(x>y && x>z)
    cout<<"X is greatest.";
    else
    cout<<"X is not the greatest.";
    */

    // ||
    cout<<"Enter any alphabet: ";
    cin>>m;

    if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u')
    cout<<"Vowel";
    else
    cout<<"Consonent";
}