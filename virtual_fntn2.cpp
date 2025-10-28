#include<iostream>
using namespace std;

//BASE CLASS
class shape{
    public:
    virtual void draw(){
        cout<<"drawing a shape"<<endl;
    }
};

//derived class
class circle:public shape{
    public:
    void draw() override{
        //override keyword optional
        cout<<"drawing a circle"<<endl;
    }
};
class rectangle:public shape{
    public:
    void draw() override{
        //override keyword optional
        cout<<"drawing a rectangle"<<endl;
    }
};

int main(){
    shape *base_ptr[3]; //base class pointer
    //here [3] we creating 3 base pointers

    shape s;
    circle c;
    rectangle r;

    base_ptr[0]=&s;//it points to shape object
    base_ptr[1]=&c;//it points to circle object
    base_ptr[2]=&r;//it points to rectangle object

    base_ptr[0]->draw();//calls shape:draw()
    base_ptr[1]->draw();//calls circle:draw()
    base_ptr[2]->draw();//calls rectangle:draw()


    
    return 0;
}