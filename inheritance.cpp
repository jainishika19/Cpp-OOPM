//single inheritance

// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void parentcar(){
//         cout<<"I have embassador car"<<endl;
//     }
// };
// class Child:public Parent{//child class inherit all properties of parent class
//     public:
//     void childcar(){
//         cout<<"I have mercedes"<<endl;
//         parentcar();
//     }
// };
// int main(){
//     Parent P1;
//     Child C1;
//     C1.childcar();
    
//     return 0;
// }

//multilevel inheritance
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void parentcar(){
//         cout<<"I have embassador car"<<endl;
//     }
// };
// class Child:public Parent{//child class inherit all properties of parent class
//     public:
//     void childcar(){
//         cout<<"I have mercedes"<<endl;
//         parentcar();
//     }
// };
// class future:public Child{
//     public:
//     void newcar(){
//         childcar();
//         cout<<"i will have flying car"<<endl;
        
//     }
// };


// int main(){
//     Parent P1;
//     Child C1;
//     future F1;
//     F1.newcar();

//     return 0;
// }
//multiple inheritance
// #include<iostream>
// using namespace std;
// class Father{
//     public:
//     void eyes(){
//         cout<<"brown eyes"<<endl;
//     }
// };
// class Mother{
//     public:
//     void race(){
//         cout<<"asian"<<endl;
//     }
// };
// class Child:public Father,public Mother{
//     public:
//     void props(){
//        race();
//        eyes();
//     }

// };

// int main(){
//     Child C1;
//     C1.props();
    
//     return 0;
// }

//q
#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"animal is eating"<<endl;
    }
};
class Bird:public Animal{
    public:
    void wings(){
        cout<<"bird is flying"<<endl;
        eat();
    }
};
class Mammal:public Animal{
    public:
    void m(){
         cout<<"doesn't lays eggs"<<endl;
         eat();

    }
};
class Bat:public Mammal,public Bird{
    public:
    void navigate(){
        cout<<"bat is navigating"<<endl;
        wings();
        m();
    }
};

int main(){
    // Bird B1;
    // Mammal M1;
    // B1.wings();
    // M1.m();
    Bat b1;
    b1.navigate();
    // b1.m();
    // b1.wings();

    
    return 0;
}