// *runtime polymorphism
// ********funtn overriding*********----it is related to inheritance
//parent and child class both contain same funtn with diff implementation
//the parent class fntn is said to be overriden
#include<iostream>
using namespace std;
class parent{
    public:
    void getinfo(){
        cout<<"parent class"<<endl;
    }
};
class child:public parent{
    public:
    void getinfo(){
        cout<<"child class"<<endl;
    }

};

int main(){
    parent p;
    p.getinfo();//calls parent class funtn
    // child c;
    // c.getinfo();//calls child class funtn
    
    return 0;
}