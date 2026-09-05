//Create a class and initilize using parameterized constructor
#include<iostream>
using namespace std;
class Employee {
    string name;
    int id;
    float salary;
    public:
    Employee(string n, int i , float s) {
    name =n;
    id =i;
    salary =s;
    }
    void display()  {
        cout<<"Name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
int main() {
    Employee s("Laksh",25 , 25000);
    s.display();
    return 0;   
}