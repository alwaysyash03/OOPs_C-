// A virtual function is a member function that you expect to be redefined in derived classes.
// Dynamic in nature.
// Keyword : "virtual" inside base class and are always declared with a base class and overridden in a child class.
// Called during runtime

#include<iostream>
#include<string>
using namespace std;

class Parent {
    public:
        void getInfo() {
            cout << "parent class\n";
        }

    virtual void hello() {
        cout << "hello from parent\n";
    }    
};

class Child : public Parent {
    public:
        void getInfo() {
            cout << "child class"<< endl;
        }

        void hello() {

            cout << "hello from child\n" << endl; 
        }
};

int main() {
    Child c1;
    c1.hello();
    return 0;
    
}