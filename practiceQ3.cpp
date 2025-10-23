// #include<iostream>
// using namespace std;
// class hero{
//     protected:
//     int power;
//     public:
//     void set_power(int p){
//         power=p;

//     }
//     int get_power(){
//         return power;
//     }
// };
// class villan{
//     protected:
//     int power;
//     public:
//     void set_power(int p){
//         power=p;

//     }
//     int get_power(){
//         return power;
//     }
// };

// class comparison:protected hero,protected villan{
//     public:
//     void power_comp(hero &h,villan &v){
//         if(h.get_power()>v.get_power()){    
//     cout<<"hero is stronger"<<endl;
//     }
//     cout<<"villan is stronger"<<endl;
// }
// };
// int main(){
//     hero h1;
//     h1.set_power(56);
//     // h1.get_power();
//     villan v1;
//     v1.set_power(78);//no need to call it as it directly calls inside power_comp funtion
//     //  v1.get_power();
//     comparison c;
//     c.power_comp(h1,v1);
//     return 0;
// }

//INHERITANCE+VIRTUAL FUNTN CODE

#include<iostream>
using namespace std;
class shape{
    public:
    virtual void area()=0;
};
class circle:public shape{
    int r;
    public:
    circle(int x){
        r=x;
    }
    void area() override{
        cout<<"area is:"<<3.14*r*r<<endl;
    }
};
class rectangle:public shape{
    int l,b;
    public:
    rectangle(int x,int y){
         l=x;
        b=y;
    }
    void area() override{
        cout<<"area is:"<<l*b<<endl;
    }
};
class triangle:public shape{
    int b,h;
    public:
    triangle(int x,int y){
        b=x;
        h=y;
    }
    void area() override{
        cout<<"area is:"<<0.5*b*h<<endl;

    }
};

int main(){
    rectangle r(5,4);
    r.area();
    circle c(8);
    c.area();
    triangle t(4,5);
    t.area();

    
    return 0;
}