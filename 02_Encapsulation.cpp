//Encapsulation -  Encapsulation is the wrapping of  data & member functions  in a single unit called class
// data properties + member function = class 
//Encapsulation helps in data hiding by private access modifier

#include<iostream>
#include<string>
using namespace std;

class Account {
    private:
    double balance;
    string password;  //Data hiding

    public:
    string accountId;
    string userName;

};