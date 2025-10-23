// //parameterised constructor example--
// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int roll,marks;
//     public:
//     Student(string n,int i,int m){
//         name=n;
//         roll=i;
//         marks=m;
//     }
//     display(){
//         cout<<name<<endl<<marks<<endl<<roll<<endl;
//     }
// };

// int main(){
//     Student s1("jiya",23,100);
//     s1.display();
    
//     return 0;
// }

//2)
// #include<iostream>
// using namespace std;
// class bankaccount{
//     int accNo,balance=0;
//     string name;
//     public:
//     void deposit(int x){

//         balance=balance+x;
//         cout<<"enter balance to deposit:"<<balance<<endl;
//     }
//     void withdraw(int y){
//         if(y>balance){
//             cout<<"insufficient balance"<<endl;
//             return;
//         }
//         balance=balance-y;
//     }
//     void displayBalance(){
//         cout<<"your balance is":<<balance;
//     }

// };

// int main(){
//     bankaccount b1;
//     b1.deposit(500);
//     b1.withdraw(8000);
//     b1.displayBalance();
    
//     return 0;
// }


//use const to initialize--error

// #include<iostream>
// using namespace std;
// class rectangle{
//     int l,b;
//     public:
//     rectangle(int l1,int b1){
//         l=l1;
//         b=b1;
//     }
//     void area(){
//        cout<<"area is:"<<l*b<<endl;
//     }
//     void perimeter(){
//         cout<<"perimeter is:"<<2*(l+b)<<endl;
//     }
//     void isSquare(){
//         if(l==b){
//             cout<<"it is square";
//         }
//         else
//         cout<<"not a square";
//     }
// };

// int main(){
//     rectangle a(8,7);
//     a.area();
//     a.perimeter();
//     a.isSquare();
//     return 0;
// }

// //virtual funtn--same for circle and sq
// #include<iostream>
// using namespace std;
// class shape{
//     public:
//    virtual void area(){}
// };
// class rectangle:public shape{
//     int l,b;
//     public:
//     rectangle(int x,int y){
//    l=x;
//    b=y;
//     }
//     void area() override{
//         cout<<"area is:"<<l*b<<endl;
//     }
// };
// int main(){
//     rectangle r1(7,5);
//     r1.area();
    
//     return 0;
// }

#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int id,salary=0;
    public:
    employee(string n,int i,int s){
        name=n;
        id=i;
        salary=s;
    }
    virtual void display(){}
};
class manager:protected employee{
    int bonus;
    public:
    manager(string n,int i,int s,int b):employee(n,i,s){
        bonus=b;
        salary+=bonus;
    }
    void display() override {
        cout<<"salary is:"<<salary<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"id is:"<<id<<endl;
        cout<<"bonus is:"<<bonus<<endl;
    }
};
class developer:protected employee{
    string projectName;
    public:
    developer(string n,int i,int s,string m):employee(n,i,s){
        projectName=m;
    }
    void display() override {
        cout<<"salary is:"<<salary<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"id is:"<<id<<endl;
        cout<<"project nameis :"<<projectName<<endl;
    }

};

int main(){
    manager m1("jia",20,400000,4000);
    m1.display();
    developer d1("nia",30,50000,"fkDummy");
    d1.display();
    
    return 0;
}