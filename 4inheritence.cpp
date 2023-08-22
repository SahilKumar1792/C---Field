#include<iostream>
   
using namespace std;
class P {
    public:P(){
        cout << "Constructor P" << endl;
    }
public:
   void print()  { cout <<" Inside P"; }
};
   
class Q : public P {
   public: Q(){
        cout<<"Constructors Inside Q"<<endl;
    }
public:
   void print() { cout <<" Inside Q"; }
};
   
class R: public Q {
    public:R(){cout<<"Constructors Inside R"<<endl;}
 };
   
int main(void)
{
  R r; 
  r.print();
  return 0;
}