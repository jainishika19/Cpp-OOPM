#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1, int c1);//declaration
    void getdata(){
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is"<<b<<endl;
        cout<<"value of c is"<<c<<endl;
        cout<<"value of d is"<<d<<endl;
        cout<<"value of e is"<<e<<endl;
    }
};
void Employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee harry;
    harry.a=3;//error bcs a is private so we cant directly access it
    harry.d=45;
    harry.e=55;
    harry.setdata(2,4,6);
    harry.getdata(); 
    return 0;
}