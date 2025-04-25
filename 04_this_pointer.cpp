//This pointer - this is the special pointer  in c++  that points to the current objects.
//this->prop is same as *(this).prop 

#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    string name;
    string dept;
    string subject;

    //Parameterized constructor
    Teacher(string name, string dept, string subject){
        this->name = name;  //when we want to display property then we use this pointer
        this->dept = dept;  //we are showing that left dept is object and other is function parameter
        this->subject = subject;
    }
    void getInfo(){
        cout<<"Name: "<<this->name<<endl;
    }
};
int main(){
    Teacher t1("yash", "cse", "python");
    t1.getInfo();
    return 0;
}