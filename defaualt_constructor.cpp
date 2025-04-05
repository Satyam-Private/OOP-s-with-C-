#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
        A(){  // default constructor has no parameters 
            cout<<"enter the value for a : ";
            cin>>a;
            cout<<"the value of a is : "<<a<<endl;
        }
};

int main(){
    A obj1;
}