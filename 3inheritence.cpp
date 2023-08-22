#include<iostream>
using namespace std;
  
class base {
    public: base(){
        cout<<"base constructor"<<endl;
    }
    int arr;
};
  
class b1: virtual public base {
    public: b1(){cout<<"b1 constructor"<<endl;}
 };
  
class b2: virtual public base { 
    public: b2(){cout<<"b2 constructor"<<endl;}
};
  
class derived:  public b1,  public b2 {};
  
int main(void)
{
    derived b;

//  cout << sizeof(b1)<<endl;
//  cout << sizeof(b2)<<endl;
//  cout << sizeof(derived)<<endl;
//  cout << sizeof(base);
  return 0;
}