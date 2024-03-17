#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Create Vector, Declare
    vector<int>v;
    vector<int>v1(5,1);

    //Size and Capacity
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    // Update Value
    v[1]=5;

    cout<<"Size of Vector V1: "<<v1.size()<<endl;
    cout<<"Capacity of Vector V1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size of Vector V1: "<<v1.size()<<endl;
    cout<<"Capacity of Vector V1: "<<v1.capacity()<<endl;

    vector<int>v3={1,2,3,4,5};
    cout<<"Size of Vector V3: "<<v3.size()<<endl;

    // Delete Value from vector
    vector<int>v4;
    v4.push_back(4);
    v4.push_back(2);
    v4.push_back(4);
    v4.push_back(6);
    v4.push_back(8);

    v4.pop_back();

    // Delete a value at a particular index
    v4.erase(v4.begin()+1);

    cout<<"Size of Vector V4: "<<v4.size()<<endl;
    cout<<"Capacity of Vector V4: "<<v4.capacity()<<endl;

    // Print values
    for(int i=0; i<v4.size(); i++)
    cout<<v4[i]<<" ";

    // Insert
    v4.insert(v4.begin()+1,5);
    cout<<endl;

    // Print values
    for(int i=0; i<v4.size(); i++)
    cout<<v4[i]<<" ";

    // Update
    v4[1]=3;
    cout<<endl;

    // Print values
    for(int i=0; i<v4.size(); i++)
    cout<<v4[i]<<" ";

    // Remove all values

    v4.clear();
    cout<<endl;

    cout<<"Size of Vector V4: "<<v4.size()<<endl;
    cout<<"Capacity of Vector V4: "<<v4.capacity()<<endl;

}