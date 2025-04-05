#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int a;
        A(){
            cout<<"this is the constructor function "<<endl;

            a  = 100;
        }
        void show(){
            cout<<"the value of a is : "<<a<<endl;
        }
};

int main(){
    A obj1;
    obj1.show();
}