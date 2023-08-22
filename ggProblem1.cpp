//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class Solution {
//   public:
//     int uniquePositions(string moves, long long k) {
//         // code here
        
//         int size=moves.size();        
//         int dist=0;
//         int max=0;
//         int min=0;        
//         for(int i=0;i<size;i++){
//             if(moves[i]=='F'){
//                 int temp=dist+1;
//                 if(temp>max){
//                     max=temp;
//                 }
//                 dist++;                
//             }
//             else{
//                 if(moves[i]=='B'){
//                     int temp=dist-1;
//                     if(temp<min){
//                     min=temp;
//                     }
//                     dist--;
//                 }                
//             }                   
//         }        
//         if(min<0){
//             min*=-1;
//         }        
//         return max+min+1;        
//     }
// };

class Solution{
    public: int uniquePositions(string moves, long long k){
        set<int> UniquePositions;
        int ans;
        UniquePositions.insert(0);
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='F'){
               ans+=k; 
            }
            else{
                ans-=k;
            }
            UniquePositions.insert(ans);
        }
        return UniquePositions.size(); 
    }
};

int main(){
    // int t;
    // scanf("%d ",&t);
    // while(t--){
        
    //     long long k;
    //     scanf("%lld",&k);
        
    //     string moves;
    //     cin>>moves;
        
        
    //     Solution obj;
    //     int res = obj.uniquePositions(moves, k);
        
    //     cout<<res<<endl;
        
    // }
    Solution obj;
    int res = obj.uniquePositions("FBFB", 1);        
    cout<<res<<endl;
}

// } Driver Code Ends
//BFFBBFFBFBBFBBBFFBFF