// #include<iostream>
// #include<string>
// using namespace std;
// class vehicle{
//     protected:
//     string brand;
//     int speed;
//     public:
//     vehicle(string b,int s){
//         brand=b;
//         speed=s;
//     }
    
//     virtual void displayInfo(){
//         cout<<"brand is:"<<brand<<endl;
//         cout<<"speed is:"<<speed<<endl;
//     }
// };
// class car:protected vehicle{
//     int doors;
//     public:
//     car(string b,int s,int d):vehicle(b,s){
//         doors=d;
//     }
//     void displayInfo() override{
//         cout<<"brand is:"<<brand<<endl;
//         cout<<"speed is:"<<speed<<endl;
//         cout<<"num of doors:"<<doors<<endl;
        
//     }

// };
// class bike:protected vehicle{
//     int wheels;
//     public:
//     bike(string b,int s,int w):vehicle(b,s){
//         wheels=w;
//     }
//     void displayInfo() override{
//         cout<<"brand is:"<<brand<<endl;
//         cout<<"speed is:"<<speed<<endl;
//         cout<<"num of wheels:"<<wheels<<endl;
        
//     }


// };


// int main(){
//     vehicle v1("mercedes",200);
//     v1.displayInfo();
//     car c1("suzuki",100,4);
//     c1.displayInfo();
//     bike b1("hero honda",300,2);
//     b1.displayInfo();
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class book{
//    protected:
//     string title,author;
//     int price;
//    public:
//    book(string t,string a,int p){
//     title=t;
//     author=a;
//     price=p;
//    }
//    virtual void display(){
//     cout<<"title is:"<<title<<endl;
//     cout<<"author is:"<<author<<endl;
//     cout<<"price is:"<<price<<endl;
//    }

// };
// class EBook:protected book{
//     int filesize;
//     string downloadLink;
//     public:
//     EBook(string t,string a,int p,int s,string l):book(t,a,p){
//         filesize=s;
//         downloadLink=l;
//     }
//     void display() override{
//     cout<<"title is:"<<title<<endl;
//     cout<<"author is:"<<author<<endl;
//     cout<<"price is:"<<price<<endl;
//     cout<<"filesize is:"<<filesize<<endl;
//     cout<<"download link is:"<<downloadLink<<endl;
//    }
// };

// int main(){
//     book b1("soul of 2 tales","XYZ",200);
//     b1.display();
//     EBook e1("y","z",100,2,"https/:ebook.com");
//     e1.display();
    
//     return 0;
// }

#include<iostream>
using namespace std;
class bank{
    protected:
    int amount;
    public:
    virtual void calculateInterest(){
//pure virtual funtn
    }
};
class currentAcc:public bank{
    int curr_amt;
    public:
    void calculateInterest() override{
        curr_amt=amount;
    }
    void show_curr_amt(){
        cout<<"current amount is :"<<curr_amt<<endl;
    }


};
class savingAcc:public bank{
    int sav_amt;
    public:
    savingAcc(int a){
        amount=a;
    }
    void calculateInterest() override{
        sav_amt=amount+(amount*.025);
    }
    void show_sav_amt(){
        cout<<"saving amount is :"<<sav_amt<<endl;
    }


};

int main(){
    savingAcc s1(1000);
    s1.calculateInterest();
    s1.show_sav_amt();   
    // currentAcc c1();
    //  c1.calculateInterest();
    // c1.show_curr_amt(); 

    return 0;
}