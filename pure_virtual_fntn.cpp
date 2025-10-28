#include<iostream>
using namespace std;
//Abstract base class
class shape{
    public:
    //pure virtual funtn
    virtual void draw()=0;
};
class circle:public shape{
    public:
    void draw(){
        cout<<"drawing circle"<<endl;
    }
};
class square:public shape{
    public:
    void draw(){
        cout<<"drawing square"<<endl;
    }
};
int main(){
    // shape s;//error :can't instantiate abstract class
    circle c;
    square s;
    // s.draw();--> calls circle's draw()
    // c.draw();--> calls square's draw()
    shape*ptr=&c;//base class ptr pointing to circle object
    ptr->draw();//calls circle's draw()


    
    return 0;
}