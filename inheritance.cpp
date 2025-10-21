#include<iostream>
using namespace std;
class parent{
    public:
    string name;
    int marks;
    parent(){
        cout<<"i am parent constructor"<<endl;
    }
};
class child:public parent{
    public:
    int rollNo;
    child(){
        cout<<"i am child constructor"<<endl;
    }
    void getinfo(){
        cout<<"name is:"<<name<<endl;
        cout<<"marks is:"<<marks<<endl;
        cout<<"rollNo is:"<<rollNo<<endl;
    }

};

int main(){
    // parent p1;//if we create this 2 times PARENT CONST. CALLED
    child c1;//when compiler reads this 1st it call parent const .then child const. 
    c1.name="jia";
    c1.marks=100;
    c1.rollNo=34;
    c1.getinfo();
    return 0;
}
//NOTE---1ST PARENT CLASS "CONSTRUCTOR" CALLED THEN CHILD CLASS CONST CALLED
//and in "destructor" 1st child class memory deallocate and then parent class memory deallocates