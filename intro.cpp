#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    int age;
    string name;
    void setName(){
        cout<<"enter your name : ";
        cin>>name;
    }
    void getName(){
        cout<<"your name is "<<name;
    }

};

int main(){
    person Satyam;
    Satyam.setName();
    Satyam.getName();
    
    
}