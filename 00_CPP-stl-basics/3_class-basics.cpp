#include <iostream>
#include <string>
using namespace std;

class TestClass{
    public: 
        string first_name;
        string last_name;
        int marks;
        int year;
        bool pass_fail;
    
        void printDetails();
        void passOrFail();
};

void TestClass::printDetails(){
    cout <<"The details of the student are as follows:" <<endl;
    cout <<"Name: " <<first_name <<" " <<last_name <<endl;
    cout <<"Marks: " <<marks <<endl;
    cout <<"Academic Year: " <<year <<endl;
    cout <<"Pass?: " <<pass_fail;
}

void TestClass::passOrFail(){
    if(marks >=45)
        pass_fail = true;
}

int main(){
    // Instantiating the class object
    TestClass student;
    
    cout <<"Enter the student' details: " <<endl;
    cout <<"First Name: " <<endl;
    getline(cin, student.first_name);
    cout <<"Last Name: " <<endl;
    getline(cin, student.last_name);
    cout <<"Academic Year: " <<endl;
    cin >> student.year;
    cout <<"Marks: " <<endl;
    cin >> student.marks;
    
    // Checking if the student passed or failed
    student.passOrFail();
    
    // Printing student details
    student.printDetails();
}
