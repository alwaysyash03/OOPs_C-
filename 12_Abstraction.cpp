// Hiding all unnecessary details & showing only the important parts
// Access Modifiers implemented

/*
Other ways:
Abstract Classes
1. Abstract classes are used to provide a base class from which other classes can be derived.
2. They cannot be instantiated and are meant to be inherited.
3. Abstract classes are typically used to define an interface for derived classes.*/

#include<iostream>
#include<string>
using namespace std;

class Shape {
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape {
    public:
        void draw() {
            cout << "drawing a circle\n";
        }
};

int main() {

    Circle c1;
    c1.draw();
    return 0;
}