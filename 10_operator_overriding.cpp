//Example of Run time polymorphism / Dynamic polymorphism 
//Parent and Child both contain the same function with different implementation.
//The parent class function is said to be overridden

#include<iostream>
#include<string>
using namespace std;

class Parent {
    public:
        void getInfo() {
            cout << "parent class/n";
        }
};

class Child : public Parent {
    public:
        void getInfo() {
            cout << "child class"<< endl;
        }
};

int main() {
    Child c1;
    c1.getInfo();
    return 0;
    
}