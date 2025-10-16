/*********default constructor***** */

// #include<iostream>
// using namespace std;
// class teacher{
//     private:
//     int salary;
//     public:
//     string name;
//     string dept;
//     // teacher(){
//     // cout<<"hello i am constructor"<<endl;}
//     teacher(){
//         cout<<"hello!!"<<endl;
//         dept="computer science";//here dept value sets to computer science 
//         //for all teachers
//     }
// };
// int main(){
//     teacher t1;//automatically constructor callled here--
//     //so prints hello i'm constructor
//     t1.name="jia";
//     cout<<t1.name<<endl;
//     cout<<t1.dept<<endl;
    
//     return 0;
// }

/*******parameterised comst*****/
// #include<iostream>
// using namespace std;
// class teacher{
    
//     public:
//     string name;
//     string dept;
//     teacher(string n,string d){
//         name=n;
//         dept=d;
//     }
//     // teacher(string name,string dept){//"this" pointer * used when we
//     //     //have to write same parameters name as the objects
//     //    this->name=name;
//     //    this->dept=dept;
//     //}
//     void display(){
//         cout<<name<<endl;
//         cout<<dept<<endl;
//     }

// };

// int main(){
//     teacher t1("jia","CS");
//     t1.display();
    
//     return 0;
// }

/******copy constructor*******/
#include<iostream>
using namespace std;

class teacher{

public:
string name;
string dept;
teacher(string n,string d){
    name=n;
    dept=d;
}
//creating custom copy const
teacher(teacher &org_obj){//call by reference "&"
//here we pass all the properties of teacher t1
    this->name=org_obj.name;
    this->dept=org_obj.dept;
}
void display(){
    cout<<name<<endl;
    cout<<dept<<endl;
}

};
int main(){
    teacher t1("jia","cs");
    //t1.display();
    //teacher t2(t1);//default copy constructor invoked--it copy parameters of t1
    teacher t2(t1);
    t2.display();

    
    return 0;
}