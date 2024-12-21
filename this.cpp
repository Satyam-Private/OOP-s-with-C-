#include<bits/stdc++.h> 
using namespace std;
// this is special pointer that points to the current object 

// when variables in class has same name as parameter passed in member function in class then we are using this pointer to avoid similarness 

class person{
    public:
    string name;
    int age;
    person(){
        cout<<"this is inside the constructor ";
    }
    void setInfo(string name  , int age){
        this->name = name;
        this->age = age;
    }

    void getInfo(){
        cout<<"the name of the person is "<<name;
        cout<<endl<<"the age is "<<age;
    }

};


int main(){
    string name1 ; 
    int age;
    person p1;
    cout<<"enter your name : ";
        cin>>name1;
        cout<<"enter your age : ";
        cin>>age;
    p1.setInfo(name1  , age);
    p1.getInfo();
    return 0;
}