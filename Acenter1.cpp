#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> arr;
int x;
while(cin>>x){
arr.push_back(x);
}
int n=arr.size();
sort(arr.begin(), arr.end());
vector<int> sm;
vector<int>sl;
if(arr.size()<3){
   cout << "Error" << endl;
   return 0;
}
for (int i = 0; i < n; i++)
{
    if(i == 0){
        sl.push_back(arr[i]);
        continue;
    }
    if(i%2==0){
        sl.push_back(arr[i]);
        continue;
    }
    else{
        sm.push_back(arr[i]);
    }
}
// for (int i = 0; i < sl.size(); i++)
// {
//     cout << sl[i] << endl;
// }

   int sum=sm[1]+sl[sl.size()-2];
   cout<< "Second smallest: "<<sm[1]<<endl;
   cout<<"Second Largest: "<<sl[sl.size()-2]<<endl;
  cout<< "sum of Second Largest and Second Smallest: "<<sum<<endl;
    return 0;
    
}