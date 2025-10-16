//scope resolution operator is used to access the variables names or functn names 
//in current scope which is defined in some other scope 
//note-------local variables--which is declared inside a funtn & accessible only within the funtn
//global--which is declared outside the functn & they are accessed by any part of program
//they have global scope
#include<iostream>
using namespace std;
//global var x
int x=6;

int main(){
    //local var x;
    int x=4;
    cout<<x<<endl;//printing local var
    cout<<::x<<endl;//printing global var
    
    return 0;
}