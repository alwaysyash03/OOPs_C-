// Static Variable: Declared as static in a function are created & initialised once for the lifetime of the program. (in function)
// Static Variables in a class are created & initialised once. They are shared by all the objects of the class. (in class)
//Static Objects:

#include<iostream>
#include<string>
using namespace std;

void func() {
    static int x = 0; //init statement - 1 run
    cout << "x: " << x << endl;
    x++;
}

int main() {
    func();
    func();
    func();
    return 0;
}