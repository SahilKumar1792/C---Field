#include <iostream>
#include <stdlib.h>
using namespace std;
 
// Function to assign the value of
// pointer ptr to another location
void foo(int* ptr)
{
    int b = 2;
 
    // ptr= (int*)malloc(sizeof(int));
    // It can be executed instead of
    // the ptr=&b but nothing change
    ptr = &b;
}
 
// Driver Code
int main()
{
    int a = 5;
    int* ptr = &a;
 
    cout << "Before the function ptr: "
         << ptr << endl;
    foo(ptr);
 
    cout << "After the function ptr: "
         << &a << endl;
    cout<< "address of pointer: " << &ptr << endl;
 
    return 0;
}