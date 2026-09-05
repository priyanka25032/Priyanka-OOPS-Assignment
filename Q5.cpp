#include<iostream>
using namespace std;
class Student {
    string name;
    int rollno;
    float cgpa;
    public:
    Student () {
        name="Rohan";
        rollno=82;
        cgpa=9;
    }
    Student(string n, int r) {
        name=n;
        rollno=r;
        cgpa=0;
    }
    Student(string n, int r, float c) {
        name=n;
        rollno=r;
        cgpa=c;
    }
    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"cgpa:"<<cgpa<<endl;
    }
};
int main() {
    Student s1;
    Student s2("Laksh", 86);
    Student s3("Rahul", 25, 9);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}