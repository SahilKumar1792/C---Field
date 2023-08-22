#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int ProductSmallestPair(int sum, vector<int>arr){
    int i=0;int j=1;
if(arr.size()>=2){
    sort(arr.begin(), arr.end());
    
        if(arr[i]+arr[j]<=sum){
            return arr[i]*arr[j];
        }
        else{
            return 0;
        }
}
return -1;
}
int main(){
int sum ;
cout << "enter sum : ";
cin >> sum;
//cout<< "Enter the arry elemtent to stop enter any Character";
vector<int> arr={9,1,2,3,4,5,6,7,8};
// while(cin>>n)
// arr.push_back(n);
auto n=arr.begin();
cout << *n ;
//cout << ProductSmallestPair(sum,arr);
}