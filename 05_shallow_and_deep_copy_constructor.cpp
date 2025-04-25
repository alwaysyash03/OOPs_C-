//Shallow and Deep Copy
//A shallow copy of an object copies all of the member values from one object to another
//A deep copy, on the other hand, not only copies the member values but also make copies of any dynamically allocated memory that the members point to 
#include<iostream>
#include<cstring>
class Student{
    public:
    string name;
    double cgpa;

    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};