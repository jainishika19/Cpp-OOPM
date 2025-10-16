// /*special methods invoked automatically at the time of object creation.
// used for initializing the objects.
// same name as the class.
// constructor doesn't have a return type.
// only called once(automatically)at object creation.
// we cant refer to their address.
// */

// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
//     /* complex(){//easy way to declare constructor
//          a=8;
//          b=0;
//     }*/
//     //--another way
//     complex();//only declaration--complex(void); --it is also right
//     void display()
//     {
//         cout << "your no is:" << a << "+" << b << "i" << endl;
//     }
// };
// //definition of constructor
// complex::complex(){
//     a=8;
//     b=0;
// }

// int main(){
//     complex c;//constructor automatically invoked when object is created of that class
//     c.display();
    
//     return 0;
// }

// /*parameterised constructor*/
// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
//     complex(int,int);//parameterised constructor
//     void display()
//     {
//         cout << "your no is:" << a << "+" << b << "i" << endl;
//     }

// };
// complex::complex(int x,int y){
//     a=x;
//     b=y;
// }


// int main(){
//     //implicit call
//     complex c(7,7);//parameters
//     //explicit call
//     complex b=complex(4,5);
//     c.display();
//     b.display();
    
//     return 0;
// }

// //que*******create a funtn which takes 2 points objects and 
// //computes the distance btw these 2 points
// #include<iostream>
// #include<cmath>
// using namespace std;

// class point{
//     int x,y;
//     friend void distance(point o1,point o2);
//     public:
//     point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void display(){
//         cout<<"("<<x<<","<<y<<")"<<endl;
//     }

// };
// void distance(point o1,point o2){
//         float distance;
//         distance=sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
//         cout<<distance;
//    }

// int main(){
//     point p1(1,1);
//     p1.display();
//      point p2(2,2);
//     p2.display();
//     distance(p1,p2);
    

    
//     return 0;
// }