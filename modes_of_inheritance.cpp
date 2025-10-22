// 1) private
#include<iostream>
using namespace std;
class base{
    public:
    int x;
    protected:
    int y;
};
class derived:private base{
    public:
    void show(){
        x=3;//private in derived
        y=6;//private in derived
    }
};

int main(){
    derived obj;
    // obj.x=7;//not accessible bcs it is private in derived
    
    return 0;
}