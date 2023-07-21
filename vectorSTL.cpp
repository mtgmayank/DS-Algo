#include<iostream>
#include<vector>
using namespace std;


//  vector->dynamic array
int main(){

    vector<int> v;
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"capacity-> "<<v.capacity()<<endl;
    // size->no. of elements
    // capacity->space assigned for elements
    cout<<"size-> "<<v.size()<<endl;

    


    
}