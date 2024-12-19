#include<bits/stdc++.h>
using namespace std;
// constructor is the method in class that has same name as class name 
// constructor doesnt have any return type 
// constructor is only called as once not more than one 
// do not made constructor inside the private access modifiers 
class home{
    public:
    int size , rooms , floors;
    home(){
        cout<<"this is inside the constructor function "<<endl;
        cout<<"enter the infornmation of your home : ";
        cout<<endl<<"enter the size of the house : ";
        cin>>size;
        cout<<endl<<"enter the number of rooms in house : ";
        cin>>rooms;
        cout<<endl<<"enter the number of floors in house : ";
        cin>>floors;
    }
    void info(){
        cout<<"House information : ";
        cout<<endl<<"size of the house : "<<size;
        cout<<endl<<"Number of rooms : "<<rooms;
        cout<<endl<<"Number of floors : "<<floors;
    }
    int priceCal(){
        cout<<"the price of the room is : ";
        int total_price = 2000 * size + 2000 * rooms + 10000 * floors;
        return total_price;
    }
    
};

int main(){
    // for first object 
    home myHome1;
    myHome1.info();
    int price1 = myHome1.priceCal();
    cout<<endl<<"the total price of home is : "<<price1<<endl;
    // for seconde object 
    home myHome2;
    myHome2.info();
    int price2 = myHome2.priceCal();
    cout<<endl<<"the total price of home is : "<<price2;
    return 0;
}