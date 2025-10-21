#include<iostream>
using namespace std;
//constructors are used to initialize the values that are 
//declared under the class by using objects
class Player{
    public:
    int score;
    
    Player(){
       int score=20;
    }
    void set_score(){
        cin>>score;
    }
    void display_score(){
        cout<<"score is"<<score<<endl;
    }
 
};
int main(){

    Player P1;
    P1.set_score();
    P1.display_score();
    return 0;
    
}