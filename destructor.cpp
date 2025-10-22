//deallocates the memory
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    double *cgpaptr;
    student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double;//new keyword--dynamically allocated memory
        *cgpaptr=cgpa;//at pointer cgpa we store cgpa
    }
    //destructor ~ with tilted sign
    ~student(){
        cout<<"hii!! i deleted everything"<<endl;
        delete cgpaptr;//"delete" used for deleting dynamic memory
    }
    
    void getinfo(){
        cout<<"name is:"<<name<<endl;
        cout<<"cgpa is:"<<*cgpaptr<<endl;
    }
};

int main(){

student s1("jia",9.8);
s1.getinfo();
}