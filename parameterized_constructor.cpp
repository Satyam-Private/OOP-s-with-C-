#include<bits/stdc++.h>
using namespace std;
class A{
    int a = 1;
    public:
        A(int x){
            
            cout<<"the old value of a is : "<<a<<endl;
            a = x;
            cout<<"the value is updated"<<endl;
            cout<<"the new value is : "<<a;
        }
};


int main(){
    A obj(10);
}