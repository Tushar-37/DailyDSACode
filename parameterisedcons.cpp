#include <iostream>
using namespace std;

class Hero{
    
    public: 

    int health;

    Hero(){

        cout<< " Constructor is called " << endl;
    }

// parameterised constructor

Hero(int health){


    cout<< "this -> : " << this << endl;
    this-> health = health; // by this line we are inserting health value in health only. constructor store value which is close to it . 
    // but we want to store the health value at 6 no line then we use "this pointer".
    // generally this pointer will store address of Health at 6 no line and 
    // by using this pointer we will change value of health at line no 6 by this pointer.

}



};


int main(){

    Hero ramesh(10);
    cout<<"address of ramesh : " << &ramesh << endl;

}