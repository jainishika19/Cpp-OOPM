// #include<iostream>
// using namespace std;
// class Base{
//     int num;
//     public:
//     void set_num(int n){
//         num=n;
//     }
//     void display(){
//         cout<<"data is:"<<num<<endl;

//     }
// };
// class Derived:public Base{
//     public:
//     void derived_set_num(int x){
//         set_num(x);
//     }
//     void derived_display(){
//         display();
//     }
// };


// int main(){
//     Base B1;
//     Derived D1;
//     // B1.num=67;
//     B1.set_num(10);
//     B1.display();
//     // cout<<B.num1;
//    D1.derived_set_num(20);
//     D1.derived_display();    
//     return 0;
// }

#include<iostream>
using namespace std;
class Base{
    int bat,ball;//by default private
    public:
    void get_bat(int b){
        bat=b;
    }

    void show_bat(){
        cout<<"bat is:"<<bat<<endl;
    }
    protected:
    void get_ball(int v){
        ball=v;
    }
    void show_ball(){
        cout<<"ball is:"<<ball<<endl;
    }
};
class Derived2:protected Base{
    public:
    Derived2(){
        get_ball(50);
        show_ball();
    }
};
class Derived1:public Base{
    public:
    Derived1(){
        get_bat(30);
        show_bat();
    }
};

int main(){
    Base B1;
    Derived1 D1;
    Derived2 D2;
    
    return 0;
}