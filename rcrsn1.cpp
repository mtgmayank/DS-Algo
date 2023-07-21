#include<iostream>
using namespace std;

// void print(){
//     cout<<1<<endl;
//     print();
// }
// int main(){
// }

int a=0;
void f(){
    if(a==4){
        return;
    }
    cout<<a<<endl;
    a++;
    f();
    
}
int main(){
    f();
}
