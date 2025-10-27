// 1) COMPILE TIME POLYMORPHISM
// *****function overloading*****
#include<iostream>
using namespace std;
class Add{
    public:
    void add(int a,int b){
        cout<<"sum of 2 integers:"<<a+b<<endl;
    }
    void add(double a,double b){
        cout<<"sum pf doubles:"<<a+b<<endl;
    }
    void add(int a,int b,int c){
        cout<<"sum of 3 integers:"<<a+b+c<<endl;
    }
    //all functions have same name but diff parameters i.e called funtn overloading
};

int main(){
    Add a1;
    a1.add(2,4);//calls add(int a,int b)
    a1.add(2,4,5);//calls add(Int a,int b,int c)
    a1.add(2.3,4.9);//calls add(double a,double b)
    return 0;
}