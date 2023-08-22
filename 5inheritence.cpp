#include<iostream>
using namespace std;
  
class Base {
protected:
     int i, j;
public:
    Base(int _i = 10, int _j = 10): i(_i), j(_j) { }
};
class Derived: public Base {
public:
     void show(){
        cout<<" i = "<<i<<"  j = "<<j;
     }
};
int main(void) {
    Base myObj(10,20);
  Derived d;
  d.show();
  return 0;
}