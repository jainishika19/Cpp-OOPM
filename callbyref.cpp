//call by reference using pointer
// #include<iostream>
// using namespace std; 
// //this will not swap a and b
// // void swap(int a,int b){   
// //      int temp=a;
// //     a=b;                //temp  a   b
// //     b=temp;}             //4     4   5
//                          //4     5   5
//                          //4     5   4 



                         
//   // swap will only possible by using reference of pointer                     
// void swapPointer(int *a,int *b){   
//      int temp=*a;
//     *a=*b;                //temp  a   b
//     *b=temp;}   

// //*a means value at address a





// int main(){
//     int x=4,y=5;
//     cout<<"value of x is"<<x<<" the value of y is"<<y<<endl;
//     // swap(x,y);//this will not swab a and b
//     swapPointer(&x,&y);
//     cout<<"value of x is"<<x<<" the value of y is"<<y<<endl;
//    return 0;
// }



// call by referencw by using reference variables



#include<iostream>
using namespace std; 
              
void swapreferenceVar(int &a,int &b){   
    int temp=a;
    a=b;                
    b=temp;}   
int main(){
    int x=4,y=5;
    cout<<"value of x is"<<x<<" the value of y is"<<y<<endl;
    // swap(x,y);//this will not swap a and b
    swapreferenceVar(x,y);//x,y declaration go to int &a and &b so changes in a,b affect changes in x,y so value changes directly
    cout<<"value of x is"<<x<<" the value of y is"<<y<<endl;
   return 0;
}
//lecture oopm
// #include<iostream>
// using namespace std;

// void new_age(int &x){
//     x=x+10;//x+=10
//     cout<<"inside funtion age is:"<<x<<endl;
// }


// int main(){
//     int age=10;
//     new_age(age);
//     cout<<"outside function:"<<age;

//     return 0;
// }