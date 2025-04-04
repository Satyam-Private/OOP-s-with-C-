// implementation of local class
#include<bits/stdc++.h>
using namespace std;
void function_of_class(){
    class person{
        string name;
        int age;
        public:
            void input(){
                cout<<"enter the name of the person: ";
                cin>>name;
                cout<<"enter the age of the person: ";
                cin>>age;
            }
            void show(){
                cout<<"name of the person is "<<name<<endl;
                cout<<"age of the person is "<<age<<endl;
            }


    };
    person p1, p2;
    p1.input();
    p1.show();

    p2.input();
    p2.show();
}


int main(){
    function_of_class();
}