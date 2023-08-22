#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent(MyClass) class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myFunction() {
      cout << "Some content in parent(MyOtherClass) class.\n" ;
    }
};

// Derived class
class MyChildClass: virtual public MyOtherClass, virtual public MyClass{
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
//   myObj.MyClass::myFunction();  
//   myObj.MyOtherClass::myFunction();  
  return 0;
}