#include<iostream>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Funstions are used to use a code several times.

// void printName(string name){
//     cout<<"hey "<< name<<endl;

// }
// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name;
//     printName(name);
//     return 0;

// take teo number and prints its sum

// void sum(int num1, int num2){
//     int num3=num1+num2;
//     cout<<num3;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     sum(num1,num2);
//     return 0;
// }

int maxx(int num1, int num2){
    if(num1>=num2) return num1;
    else return num2;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int maximum=maxx(num1,num2);
    cout<<maximum;
    return 0;
}
