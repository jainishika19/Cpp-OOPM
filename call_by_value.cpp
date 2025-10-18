//call by value: when the funtn is called inside another funtn it can't alter the local properties of parent functn umless the address of varible is passed 
//but a copy of value is passed when the variable is passed as argument
#include<iostream>
using namespace std;

void new_age(int x){
    x=x+10;
    cout<<"inside funtion age is:"<<x<<endl;
}


int main(){
    int age=10;
    new_age(age);
    cout<<"outside function:"<<age;

    return 0;
}

//if we want to change the value of outside functn age then we declare &x
#include<iostream>
using namespace std;

void new_age(int &x)//here &x
{
    x=x+10;
    cout<<"inside funtion age is:"<<x<<endl;
}


int main(){
    int age=10;
    new_age(age);
    cout<<"outside function:"<<age;

    return 0;
}


#include<iostream>
using namespace std;
int set_height(int &h)
{
    h+=5;
    return h;
}
int set_weight(int w)
{
    w+=10;
    return w;
}

int main(){
    int num=10;
    cout<<"height is:"<<set_height(num)<<endl;
    cout<<"height is:"<<set_weight(num)<<endl;
    cout<<"num is"<<num;
    // set_weight(10);
    
    return 0;
}