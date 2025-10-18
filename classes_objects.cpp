// we can declare objects along with the class declaration
// class employee{
//     definition
// }harry,ram,diya;
// harry.salary makes no sense if salary variable is private

/***NESTING OF MEMBER FUNTN******/
// ex---check binary no;
#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void check_binary(void);
    void ones_comp(void);
    void display(void);
};
void binary::read(void)
{
    cout << "enter a binary no:";
    cin >> s;
}

void binary::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_comp(void)
    {
        binary();
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }

            else
            {
                s.at(i) = '0';
            }
        }
    }
    void binary:: display(){
        cout<<s<<endl;
    }
int main()
{
    binary b; // b is the object of binary class
    b.read();
    b.check_binary();
    b.ones_comp();
        b.display();


    return 0;
}

// ones complement of binary --1=0 and 0=1
// #include <iostream>
// #include <string>

// using namespace std;
// class ones
// {
//     string s;
//     void binary(void)
//     {
//         cout << "enter binary no";
//         cin >> s;
//     }

// public:
//     void ones_comp(void)
//     {
//         binary();
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s.at(i) == '0')
//             {
//                 s.at(i) = '1';
//             }

//             else
//             {
//                 s.at(i) = '0';
//             }
//         }
//     }
//     void display(){
//         cout<<s<<endl;
//     }
// };

//     int main()
//     {
//         ones b;
//         b.ones_comp();
//         b.display();

//         return 0;
//     }