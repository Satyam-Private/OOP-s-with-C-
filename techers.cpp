#include<bits/stdc++.h>
using namespace std;
class teachers{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    void Name(string newName){
        name = newName;
        cout<<"your name is : "<<newName<<endl;
    }
    void changeDept(string newDept){
        dept = newDept;
        cout<<"your new department is : "<<dept<<endl;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept;
    }

};


int main(){
    teachers t1;
    string name , dept;
    cout<<"enter your name : ";
    cin>>name;
    t1.Name(name);
    cout<<"enter your new department : ";
    cin>>dept;
    t1.changeDept(dept);
    t1.getInfo();
    cout<<endl<<t1.name;
    return 0;
}