#include <iostream>
using namespace std;

/*Access specifier :-
1) private // default it is private only
2) public // it is accesible outside of the class and inside too.
3) protected // discuss later.*/

class Hero // creation of class && having diff state , behaviour and fun. 
{

    // initially class elements are private they are not accessible outside of the class
    int health; // private member of class

    // we have to initialised public to that member to access outside of class.
    //propertise:-
    public: 

    char level; // public member

    void print(){
        cout<< health << endl;  // here we can access that member insinde private block.
    }
};

int main()
{
    // creation of object
    Hero Aakash; // here we have creted an object which has different state , behaviour which is connected to class.


    Aakash.health = 70;
    Aakash.level = 'A'; // we defined value here then it will not provide garbage value.


    //cout << "health is : " << Aakash.health << endl; // health having error due to they are member of priveate class and cannot br accessible outside the class.
    cout<< "level is :" << Aakash.level<< endl; // here level does not have any error becuase it is member of public class.
    // output of above level statement is 1 has default because we dont gave any value to it 1 is considered as garbage value.

}