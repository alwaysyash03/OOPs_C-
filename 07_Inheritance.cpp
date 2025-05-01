//When properties & member functions of base class are passed on to the derived class
//Inheritance used for code reusability
#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }
    Person() {
        cout<< "Parent class"<<endl;
    }
};
class Student : public Person {
    public:
        int rollno;

    Student(){
        cout<< "Child class"<< endl;
    }    

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno <<endl;
    }
};

int main() {
    Student s1;
    s1.name = "Yash Kumar";
    s1.age = 22;
    s1.rollno = 1234;

    s1.getInfo();
    return 0;

}

