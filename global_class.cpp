#include<bits/stdc++.h>
using namespace std;
class person{
   
    int age;
    string name;
    public:
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