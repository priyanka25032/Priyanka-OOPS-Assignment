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
void test () {
    Demo d2;
    Demo d3;
    cout<<"Inside test()"<<endl;
}
int main() {
    Demo d1;
    cout<<"Before test()"<<endl;
    test();
    cout<<"Back in main()"<<endl;
    return 0;
}