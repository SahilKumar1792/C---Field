#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 void ReplaceCharacter(string str,int n,char ch1,char ch2){
 if(ch1==ch2){
     cout <<"string Unchanged" << endl;
     return;
 }
for(int i=0;i<n;i++){
    if(str[i]==ch1)
    str[i]=ch2;
    else if(str[i]==ch2){
        str[i]=ch1;
    }
}
cout<< str;
}
int main(){
    string str;
    char a;
    char p;
    getline(cin,str);
    cin>> a;
    cin>> p;
    cout<< str.size();
//cout<< str.replace(str.begin(),str.end())<<endl;
     //ReplaceCharacter(str,str.size(),a,p);
    return 0;
}