// #include<iostream>
// using namespace std;
// class account{
//     public:
//     int balance;
//     int account number;
//     account(){
//         int balance =80000;
//         int account number=8;
//     }
//     display(){
//         cout<<account number<<endl;
//         cout<<account no.<<endl;

//     }
// };

// int main(){
//     // account A1(balance,account number);
//     account A2=account();

//     return 0;
// }

//virtual funtn 
#include <iostream>
using namespace std;
class Account
{
    int balance, accountno;

public:
    Account(int bal, int num)
    {
        balance = bal;
        accountno = num;
        
    }
    Account(const Account &obj)
        {
            balance = obj.balance;
            accountno = obj.accountno;
        }
    void display()
    {
        cout << "acc no is:" << accountno << endl;
        cout << "balance is:" << balance << endl;
    }
    void add(int num){
        balance+=num;
    }
};

int main()
{
    Account A1(50000,294);
    A1.display();
    A1.add(8);
    
    Account A2=A1;
    A2.display();
    A2.add(8);
    
    

    return 0;
}
