#include<iostream>
using namespace std;

// this file inculde concept of private access specifier the member can be accessible outside of class with the help of getter and setter fuction.

class Hero{

    private:
    int Health;

    public:
    char level;

    void print (){
        cout << level << endl;
    }

    int getHealth(){
        return Health;
    }

   char getlevel(){
        return level;
    }

    void  setHealth(int h){
        Health = h;
    }

     void  setlevel(char ch){
        level = ch;
    }

};

int main(){

    Hero Aakash;
    // used getter
    cout << "Aakash health is: " << Aakash.getHealth() << endl;

    // used setter
    Aakash.setHealth(70); // By this way we can access the member of private class.

   //  Aakash.Health = 70;
    Aakash.level = 'A';

    cout << "Health is : " << Aakash.getHealth() << endl;
    cout << "level is : " << Aakash.level << endl;

}

