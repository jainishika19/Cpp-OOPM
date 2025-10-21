// #include<stdio.h>
// int main(){
//     char c;
//     printf("enter character");
//     scanf("%c",&c);
//     if(c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u')
//     printf("it's a vowel");
//      else
//      printf("it's a consonant");
     
   
//     return 0;
// }
        

// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     cout<<"enter no.";
//     cin>>i;
//     if(i>0){
//        cout<<"no is positive";
//     }
//     else if(i<0){
//         cout<<"no is negative";
//     }
//     else if(i==0){
//     cout<<"no is zero";
//     }
//     else
//     cout<<"check your no";//not showing why

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "enter 3 no." << endl;
//     cin >> a;
//     cin >> b;
//     cin >> c;
//     if ((a + b) > c)
//     {
//         cout << "superman";
//     }
//     else
//         cout << "batman";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i;
//     cout << "enter no:";
//     cin >> i;
//     if (i %2 == 0)
//     cout << "no is even" << endl;
//     else
//     cout <<"no is odd";

//     return 0;
// }
//electricity bill calculate
// #include<iostream>
// using namespace std;

// int main(){
//     int u;
//     cout<<"enter unit:";
//     cin>>u;
//     if (u>0&&u<100)
//     cout<<u*5;
//     else if(u>100&&u<200)
//     cout<<500 +((u-100)*7);
//     else 
//     cout<<1200+((u-200)*10);
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int u;
    cout<<"enter unit:";
    cin>>u;
    int price;
    if (u<=100){
    price =u*5;}
    else if(u>100&&u<200){
    price=500 +((u-100)*7);
    }
    else 
   price=1200+((u-200)*10);
   cout<<price;
    return 0;
}