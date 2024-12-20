#include<iostream>
using namespace std;
// types of constructor 
// paramatric constructor and non-paramatric constructors 

// there can be multiple constructos in cpp but change is there number of parameters 

// this concept is also called as constructor overloading


class person{
    public:
    string name;
    int age;
    // constructor with 0 parameters
    person(){
        cout<<"this is inside the non parametric constructor";
    }
    // constructor with 2 parameters 
    person(string n , int a){
        name = n;
        age = a;
    }
    void getInfo(){
        cout<<"the name is "<<name;
        cout<<endl<<"the age is "<<age<<endl;
    }

    



};
int main(){
    person p1("satyam" , 20); // object1 of same class for parametric constructor 
    p1.getInfo();
    person p2; // object 1 of same class for non parametric constructor 
    return 0;
}