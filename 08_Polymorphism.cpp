//Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
// Compile time polymorphism
// Run time polymorphism

#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        string name;

        Student() {
            cout << "non-parameterized\n";
        }

        Student(string name) {
            this->name = name;
            cout<< "paramterized\n";
        }
};

int main() {
    Student s1;
    Student s2("Yash Kumar");
    return 0;
}