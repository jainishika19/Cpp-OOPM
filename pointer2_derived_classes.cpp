#include<iostream>
using namespace std;
class baseClass{
    public:
    int var_base;
    void display(){
        cout<<"displaying base class variable : "<<var_base<<endl;
    }
};
class derivedClass:public baseClass{
    public:
    int var_derived;
    void display(){
        cout<<"displaying base class variable: "<<var_base<<endl;
        cout<<"displaying derived class variable: "<<var_derived<<endl;
    }

};

int main(){
    baseClass *base_class_pointer;//creating base class pointer that points
    //to object of base class
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;//here base class pointer points to derived class
    // object not base class object 
    //like as we know ---> base_class_pointer=&obj_base
    base_class_pointer->var_base=56;//accessing base class variable object with help of base class pointer
   //----- base_class_pointer->var_derived=756;   //error as base class pointer do not access derived class object
    base_class_pointer->display();//it only display base class display() fntn not of derived
    //bcs it is a pointer of base class 

    //now creating derived class pointer
    derivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
   derived_class_pointer->var_derived=76;
   derived_class_pointer->display(); // it display derived class display() ftn

    // ------>>>> now the prblm is that when we points base class ptr to derived object then 
    // still it can't points it ,bcs when we call  base_class_pointer->display(); then it call base class display()
    //fntn not derived class fntn

    // ------>>>>> soln is VIRTUAL functions........
    return 0;
}