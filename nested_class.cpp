#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        class B{
            int first_num, second_num;
            public:
                void input(){
                    cout<<"enter the first number: ";
                    cin>>first_num;
                    cout<<"enter the second number:";
                    cin>>second_num;
                }
                void show(){
                    cout<<"the first number is "<<first_num<<endl;
                    cout<<"the second number is "<<second_num<<endl;
                }
        };

};


int main(){
    A::B obj;  // scode resolution operator is used to access the nested class
    obj.input();
    obj.show();
    return 0;


}