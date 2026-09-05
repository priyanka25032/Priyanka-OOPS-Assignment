//Make a class using parameterized constructor 
#include<iostream>
using namespace std;
class Rectangle {
    float lenght , breadth;
    public:
    Rectangle (float l, float b) {
        lenght=l;
        breadth=b;
    }
    void display() {
        cout<<"Area:"<<lenght*breadth;
    }
};
int main() {
    Rectangle s(12,12);
    s.display();
    return 0;
}