//AMBIGUITY RESOLUTION IN INHERITANCE---
/*when 2 or more base classes have funtions with same name,and derived class
inherits from both,
then compiler gets confused about which funtn to call*/


// #include<iostream>
// using namespace std;
// class base1{
//     public:
//     void greet(){
//         cout<<"hello"<<endl;
//     }

// };
// class base2{
//     public:
//     void greet(){
//         cout<<"namaste"<<endl;
//     }

// };
// class derived:public base1,public base2{
//     public:
//     void greet(){
//         base1::greet();  //ambiguity resolution
    
//      }
// };

// int main(){
//     derived d;
//     d.greet();//---here error bcs both base classes have same fntn
//     // and compiler gets confused which greet fntn to call

    
//     return 0;
// }


//AMBUIGUITY 2---AUTOMATIC SOLVED BY COMPILER
#include<iostream>
using namespace std;
class B{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};
class D:public B{
    public:
    //   void say(){
    //     cout<<"hello duniya"<<endl;
    // }

};

int main(){
    B b1;
    b1.say();
    D d1;
    d1.say();//if we do not create D say() fntn then this calls automatic
    // B say() fntn as it inherits all properties
    
    return 0;
}