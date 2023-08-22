// #include <algorithm>
// #include <iostream>
// #include <vector>
 
// void push_zeros_to_end(std::vector<int>& arr)
// {
//   std::stable_partition(arr.begin(),
//             arr.end(),
//             [](int n) { return n != 0; });
// }
 
// int main()
// {
//   std::vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};
   
//   push_zeros_to_end(arr);
   
//   for(const auto& i : arr)
//     std::cout << i << ' ';
 
//   std::cout << "\n";
 
//   return 0;
// }


//***********************
#include<iostream>
void pushZerosToEnd(int arr[],int n);
int main(){
    int arr[]={1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    pushZerosToEnd(arr,n);
}
void pushZerosToEnd(int arr[],int n){
    int count= 0;
    for (int i = 0; i < n; i++)
    {
           if(arr[i]!=0)
           arr[count++]=arr[i]; 
    }
    
}