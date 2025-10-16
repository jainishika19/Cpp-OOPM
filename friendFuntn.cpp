// this is the simple program of displaying complex no.(a+bi)
//   #include<iostream>
//  using namespace std;
//  class complex{
//      int a,b;
//      public:
//      void setnumber(int n1,int n2){
//          a=n1;
//          b=n2;
//      }
//      void display(){
//          cout<<"your no is:"<<a<<"+"<<b<<"i"<<endl;
//      }
//  };

// int main(){
//     complex c1;
//     c1.setnumber(3,5);
//     c1.display();

//     return 0;
// }

//********sum of 2 complex no by using friend funtn***
//**note-if we declare int a,int b in public then we dont need to declare friend function line*/
// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
//     friend complex sumcomplex(complex o1,complex o2);//if we dont declare this friend funtn then the ftn sumcomplex cant
//     //access data of complex class
//     void setnumber(int n1,int n2){
//         a=n1;
//         b=n2;
//     }

//     void display(){
//         cout<<"your no is:"<<a<<"+"<<b<<"i"<<endl;
//     }

// };
// now we creating a funtn which returns complex (class) and passing arguments
// in the form of objects of complex class
//    complex sumcomplex(complex o1,complex o2){
//     complex o3;
//     o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
//      return o3;

// }

// int main(){
//     int a,b;
//     complex c1,c2,sum;//these are objects of complex class
//     c1.setnumber(3,5);
//     c1.display();
//     c2.setnumber(6,7);
//     c2.display();
//     sum=sumcomplex(c1,c2);
//     sum.display();

//     return 0;
// }
/*properties of friend funtn
1.not in the scooe of class
2.since its not in the scope of the class it can't be called feom the object of that class---c1.sumcomplex() is invalid
bcs c1 is a object of class complex
3.usually contains the objects as aruguments
5.can be declared inside private or public section of the class
6.it cant access members directly by their names it needs objectName.memberName to access any member*/

//********now we accessing daata of one class in other class by using friend funtn//
#include <iostream>
using namespace std;
class complex
{
    
    int a, b;
    //declaring the entire calculator class as friend
    friend class calculator;
    //individually declaring functions as friends--error throw??
    // friend int calculator::sumRealComplex(complex,complex);
    // friend int calculator::sumCompComplex(complex,complex);
    public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;

    }
    void display()
    {
        cout << "your no is:" << a << "+" << b << "i" << endl;
    }
};
class calculator{
    public:
    int add(int a,int b){
        return(a+b);
    }
    int sumRealComplex(complex o1,complex o2){//real part sum
        return(o1.a+o2.a);
    }
    int sumCompComplex(complex o1,complex o2){//complex part sum
        return(o1.b+o2.b);

    }

};
int main()
{
    complex o1,o2;
    o1.setnumber(4,5);
    o2.setnumber(7,5);
    calculator calc;
    // cout<<calc.sumRealComplex(o1,o2);--o/p is 11 as 4+7=11
    int res=calc.sumRealComplex(o1,o2);//--11
    cout<<"the sum of real part of o1 and o2 is:"<<res<<endl;

    int resc=calc.sumCompComplex(o1,o2);//--10
    cout<<"the sum of complex part of o1 and o2 is:"<<resc;

    return 0;
}