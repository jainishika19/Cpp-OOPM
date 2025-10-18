// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"enter age"<<endl;
//     cin>>age;
//     if(age>=18){
//         cout<<"eligible for vote";
//      }
//      else
//      cout<<"not eligible for vote";

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"enter 1st no"<<endl;
//     cin>>a;
//     cout<<"enter 2nd no"<<endl;
//     cin>>b;
//     if(a>b)
//     cout<<"a is greater than b"<<endl;
//     else
//     cout<<"b is greater than a"<<endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
// int num;
// cout<<"enter no:";
// cin>>num;
//     if(num%3==0)
//     cout<<"no is divisible by 3"<<endl;
//     if(num%5==0)
//     cout<<"no is divisible by 5"<<endl;
//     if(num%3==0&&num%5==0)
//     cout<<"no is divisible by both"<<endl;
//     else//here this else condition only associated by above if condn
//     cout<<"not divisible by both";
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"enter no:";
//     cin>>num;
//     if(num%3==0)
//     cout<<"divisible by 3"<<endl;
//     else if(num%5==0)
//     cout<<"divisible by 5"<<endl;
//     else if(num%3==0&&num%5==0)
//     cout<<"divisible by both"<<endl;
//     else if(num%3!=0&&num%5!=0)
//     cout <<"divisible by none";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"enter no:";
//     cin>>num;
//     if(num%3==0&&num%5!=0)
//     cout<<"divisible by 3"<<endl;
//     else if(num%5==0&&num%3!=0)
//     cout<<"divisible by 5"<<endl;
//     else if(num%3==0&&num%5==0)
//     cout<<"divisible by both"<<endl;
//     else
//     cout <<"divisible by none";
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "enter marks" << endl;
    cin >> marks;
    if (marks >= 90 && marks <= 100)
        cout << "A+";
    else if (marks >= 80 && marks <= 90)
        cout << "A";
    else if (marks >= 70 && marks <= 80)
        cout << "B+";
        else if (marks == 67)
        cout << "sixty seven" << endl;//if we want to print 67 then we have to write its code before 60&70 condn 
    else if (marks >= 60 && marks <= 70)//bcz the compiler 1st read 60 70 condn if we write 1st
        cout << "B" << endl;
    else if (marks >= 50 && marks <= 60)
        cout << "C+" << endl;
    else
        cout << "fail";

    return 0;
}