//friend function--classes that can access private as well as protected members
#include<iostream>
using namespace std;
class Derived;
class Base{
    friend class Derived;
    int num=35;
    public:
    void show1(){
        cout<<"this is from parent class"<<endl;
    }
};
class Derived{
   friend class Base;
    public:
    void show2(){
        cout<<"this is from child class"<<endl;
    }
    void showprivateInheritance(Base &B){
        cout<<"friend function made me access this variable"<<B.num<<endl;
    }
};

int main(){
    Base B1;
    B1.show1();
    
    Derived D1;
    D1.show2();
    D1.showprivateInheritance(B1);
    
    return 0;
}
//message passing --when the objects os classes COMMUNICATE with each other
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     void startEngine(){
//         cout<<"engine is starting"<<endl;
//     }
// };
// class Driver{
//     public:
//     void acceleration(Car &c){//here car class is call and its object c is calling
//         c.startEngine();
//         cout<<"driver hits the throttle"<<endl;
//     }
// };

// int main(){
//     Car C1;
//     Driver D;
//     D.acceleration(C1);
    
//     return 0;
// }