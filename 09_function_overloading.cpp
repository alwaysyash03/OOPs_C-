//Example of Compile time polymorphism
//Function overloading has same function name but different parameters

#include<iostream>
#include<string>
using namespace std;

class Print {
    public:
        void show(int x) {
            cout << "int: " << x << endl;
        }

        void show(char ch) {
            cout << "char: " << ch << endl;
        }
};

int main() {
    Print p1;
    p1.show(101);
    return 0;
}