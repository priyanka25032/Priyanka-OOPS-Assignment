//Create a class and observe in which order the constructor and deconstructor are called
#include<iostream>
using namespace std;
class Demo {
    public:
    Demo() {
        cout<<"Constuctor called"<<endl;
    }
    ~Demo() {
        cout<<"Destructor called"<<endl;
    }
};
int main() {
    Demo d1;
    Demo d2;
    Demo d3;
    return 0;
}
