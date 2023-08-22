#include <iostream>
using namespace std;

class A
  {
    public:
      int MyFn() { return 42; }
  };

  class B : public A
  {
    public:
      virtual int MyFn() { return 13; }
  };
  int  main(){
    B* a=new B();
    cout<<a->MyFn();
    return 0;
  }