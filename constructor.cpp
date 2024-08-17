#include<iostream>
using namespace std;

class Hero{

    public:

    Hero(){ // constructor is created by us for object. default constructor

        cout<< "constructor is called : successfully" << endl;
    }
    int Level ;
    int Health;

};


int main(){

//cout<< "hii"<< endl;

// object creation statically
Hero Tushar;

//object cretaion dynamically
Hero *h = new Hero; // if we called statically or dynamically for both same constructor is get called. 
//which we created otherwise it is automatically get called.
//if we create a constructor then early automatic constructor is get deleted.

//cout<< "hello"<< endl;



}
