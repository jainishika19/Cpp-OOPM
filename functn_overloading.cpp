//function overloading --we can create many funtion with same name 
//and each function do different work by passing arguments

#include<iostream>
using namespace std;
//volume of
int volume(double r,int h){
    return(3.14*r*r*h);
}
int volume(int a){
    return a*a*a;
}
int volume(int l,int b,int h){
    return(l*b*h);
}
    
int main(){
    cout<<"volm of cube is"<<volume(3)<<endl;
    cout<<"volm of cylinder is"<<volume(3,6)<<endl;
    cout<<"volm of cuboid is"<<volume(3,7,6)<<endl;
    return 0;
}