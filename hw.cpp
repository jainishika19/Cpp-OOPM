//WAP to multiply two no by taking inputs from user
// WAP to add decimal and integer funtn take input as parameters
// #include<iostream>
// using namespace std;
//the code below has errors
// int main(){
//     int a,b,c;
//     c=a*b;
//     cout<<"enter Numbers";
//     cin>>a;
//     cin>>b;
//     cout<<"sum is"<<c;


//     return 0;
// }



// #include<iostream>
// using namespace std;

// float sum(float a,int b){
//     return a+b;
// }
// int main()
// {
//     // float b;
//     // int a;
 
// cout<<"sum is"<<sum(34.5,10);
// // cout<<sum;
    
//  return 0;   
// }


// #include<iostream>
// using namespace std;

// int main(){
    
//     int a,b,c;
//     // cin>>a;
//     // cin>>b;
//     cin>>a>>b;// note we can't write endl after cin statement
//     c=a+b;
//     cout<<"sum is"<<c;
//     return 0;
// }
//sum of decimal no by giving arguments
#include<iostream>
using namespace std;

float sum(float a,float b){
    return a+b;
}
int main(){
    cout<<sum(23.4,87.5);
    return 0;
}

//void funtc
#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"hello";
    return;
}

int main(){
    int num1, num2;
    cout<<"enter 1st";
    cin>>num1;
    cout<<"enter 2nd";
    cin>>num2;
    cout<<"sum is"<<sum(num1,num2);
    g(); 

 return 0;
