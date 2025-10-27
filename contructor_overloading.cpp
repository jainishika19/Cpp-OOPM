// #include<iostream>
// using namespace std;
// class constructor{
//     public:
//     string name;
//     constructor(){
//         cout<<"non-parameterised"<<endl;
//     }
//     constructor(string name){
//         this->name=name;
//         cout<<"parameterised"<<endl;
//     }
// };

// int main(){

//     // constructor c1;//calls non-parameterised const.
//     constructor c1("j");//calls parameterised const.
    
    
//     return 0;
// }

//constructor overloading with default arguments
#include<iostream>
using namespace std;
class complex{
    int num1,num2;
    public:
    complex(int a,int b=6){//also (int a,int b=5,int c=8)
        num1=a;
        num2=b;
        
    }
    void display();
};
//by scope resolution operator
void complex::display(){
    cout<<"the value of num1 and num2  is :"<<num1<<" and "<<num2<<endl;
}

int main(){
    complex c1(4);//by default value of b is 5 as we paass it in constructor by default
    //we can pass value of c also by default
    c1.display();
    
    return 0;
}


