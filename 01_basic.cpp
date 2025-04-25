// Class and Objects
// Objects are entities in real world
// Class is like a blueprint of these entities
/*  Access Modifiers
private data and members accessible inside class
public data and members accessible to everyone
protected data and members accessible  inside class & to its derived class
*/

#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    double salary;

    public:
    //Properties / Attributes
    string name;
    string dept;
    string subject;
    

    //Methods / Member functions
    void changeDept(string newDept){
        dept = newDept;  //Change the value of dept
    }

    //setter - Set the private value
    void setSalary(double s){
        salary = s;
    }
    //getter - Get the private value
    double getSalary(){
        return salary;
    }
};

int main() {
    //Creating an object of class Teacher
    Teacher t1;
    t1.name = "John";
    t1.subject = "C++";
    t1.dept = "Computer Science";

    //we can indirectly access the salary
    t1.setSalary(50000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}