#include<bits/stdc++.h>
using namespace std;

class car{
    string color;
    int number;
    int number_of_wheels;
    public:
        void input(){
            cout<<"enter the color of the car: ";
            cin>>color;
            cout<<"enter the number of the car: ";
            cin>>number;
            cout<<"enter the number of wheels of the car: ";
            cin>>number_of_wheels;
        }
        void show(){
            cout<<"color of the car is "<<color<<endl;
            cout<<"number of the car is "<<number<<endl;
            cout<<"number of wheels of the car is "<<number_of_wheels<<endl;
        }
};

int main(){
    car c1, c2, c3;
    c1.input();
    c1.show();

    c2.input();
    c2.show();

    c3.input();
    c3.show();

}