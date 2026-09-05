// Program to create a Class Student using default constructor for initialization
#include<iostream>
using namespace std;
class Student {
    string name;
    int rollno;
    public:
    Student () {
        name="Laksh";
        rollno=86;
    }
    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }
};
int main() {
    Student s;
    s.display();
    return 0;
}