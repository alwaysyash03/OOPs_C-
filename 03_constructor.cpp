// Constructor - Special method invoked automatically  at time of object creation. Used for initialisation
/*- Same name as per class
- Constructor doesn't have a returntype
- Only called once (automatically), at object creation
- Memory allocation  happens when constructor is called*/

//Copy constructor - Special constructor(default) used to copy properties of one object into other.

//Constructor Overloading - Name same but type different and constructor overloading is example of Polymorphism
#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    // Non-Parametrize constructor
    Teacher()
    {
        cout << "Hi, I am constructor." << endl;
        dept = "computer science";  // Initialize value so no need to change value
    }
    // Parametrize constructor
    Teacher(string n, string d, string s, double sal){
         name = n;
         dept = d;
         subject = s;
         salary = sal;
    }
    // Copy Constructor
    Teacher(Teacher &orgObj){ //Pass by reference 
    cout<<"I m custom copy constructor"<<endl;
    this->name = orgObj.name;
    this->dept = orgObj.dept;
    } 
    string name;
    string dept;
    string subject;
    double salary;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

int main()
{
    // Teacher t1; //constructor call
    // Calling Parametrized constructor
    Teacher t2("Ishita", "Computer Science", "Maths", 50000.0);
    t2.getInfo();
    Teacher t3(t2);  // Default Copy Constructor invoked
    t2.getInfo();

    return 0;
}