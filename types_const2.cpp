/********custom copy by pointer ***/
//dynamic memory allocatn
// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     double *cgpaptr;
//     student(string name,double cgpa){//s1 info
//         this->name=name;
//         cgpaptr=new double;//new keyword--dynamically allocated memory
//         *cgpaptr=cgpa;//at pointer cgpa we store cgpa
//     }
//     student(student &obj){//custom copy constructor--copy tp s2
//         this->name=obj.name;
//         this->cgpaptr=obj.cgpaptr;
//     }
//     void getinfo(){
//         cout<<"name is:"<<name<<endl;
//         cout<<"cgpa is:"<<*cgpaptr<<endl;
//     }
// };

// int main(){

// student s1("jia",9.8);
// student s2(s1);
// s1.getinfo();
// *(s2.cgpaptr)=9.9;//here we change s2 cgpa but s1 cgpa also change 
// //b/c of shallow copy even if we create default copy
// s1.getinfo();
    
//     return 0;
// }

//******DEEP copy*****//
//in deep copy we create separate pointer for s2 sp that if we change in it
//it's do not change s1 info

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     double *cgpaptr;
//     student(string name,double cgpa){
//         this->name=name;
//         cgpaptr=new double;//new keyword--dynamically allocated memory
//         *cgpaptr=cgpa;//at pointer cgpa we store cgpa
//     }
//     student(student &obj){//custom copy constructor
//         this->name=obj.name;
//         cgpaptr=new double;
//         *cgpaptr=*obj.cgpaptr;//here we create new pointer for s2
//     }
//     void getinfo(){
//         cout<<"name is:"<<name<<endl;
//         cout<<"cgpa is:"<<*cgpaptr<<endl;
//     }
// };

// int main(){

// student s1("jia",9.8);
// student s2(s1);
// s1.getinfo();
// *(s2.cgpaptr)=9.9;//here we change s2 cgpa but s1 cgpa also change 
// //b/c of shallow copy even if we create default copy
// s1.getinfo();
// }