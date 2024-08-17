#include <iostream>
using namespace std;

class Hero{

public:

    Hero(){

        cout<< "Constructor is called : " << endl;
    }
    
    // Destructor creation

    ~Hero(){

        cout << "Destructor is called: " << endl;
    }

    // After creating destructor earlier destrusctor will get deleted from memory and manually created will be used.
};


int main(){


//Destructor is used to deallocate  the memory.

    // statically
    Hero a;
    // for statically allocation of object Destructor is automatically get called.

    //Dynamically

    Hero *h = new Hero();
    // for Dynamic object we have to called Destructor manually.
    delete h;
    
    return 0;

}