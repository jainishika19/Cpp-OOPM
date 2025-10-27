// *******dynamic initializatn of objects using constructor
// calculating interest
#include <iostream>
using namespace std;
class bankDeposit
{ // example of investing to bank(interest)
    int principal;
    int years;
    float interestRate;
    float amount; // that we get after interest--we have to find it

public:
    bankDeposit();
    bankDeposit(int p, int y, float r)
    { // here r for value like 0.04(decimal value of rate)
        principal = p;
        years = y;
        interestRate = r;

        amount = principal;
        for (int i = 0; i < y; i++)
        {
            amount = amount * (1 + r);
        }
    }
    bankDeposit(int p, int y, int r)
    { // here r for value like 4 %(rate)
        principal = p;
        years = y;
        interestRate = float(r)/100;

        amount = principal;
        for (int i = 0; i < y; i++)
        {
            amount = amount * (1 + interestRate);
        }
    }

    void show()
    {
        cout << "amount after" << years <<" years is:" << amount << endl;
    }
};

int main()
{
    // if we create objects like
    // bankDeposit b1,b2,b3;
    // then we have to made a default constructor at the starting
    //bcs compiler can't decide which constructor to be called 
    
    int p, y;
    float r;
    int R;
    cout << "enter value of p,y,r"<<endl;
    cin >> p >> y >> r;
    
    bankDeposit b1(p,y,r);
    b1.show();
    cout << "enter value of p,y,r"<<endl;
    cin >> p >> y >> r;

    bankDeposit b2(p,y,R);//it callls int value 
    b1.show();
    return 0;
}
// note-we can also find Compound interest by 
// CI=amount-principal
// if P=1000 & we get amount =1210
// CI=1210-1000=210