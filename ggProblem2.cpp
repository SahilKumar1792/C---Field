class Solution {
  public:
    
    bool check(long long k,vector<int>&a,long long total){
        long long dis=0;
        for(int i=1;i<a.size();i++){
            long long cur=a[i]-a[i-1];
            long long len=min(k,cur);
            dis+=k*len-(len*(len-1)/2);
        }
        dis+=k*(k+1)/2;
        if(dis>=total)return 1;
        return 0;
    }
    int minimizeTopSpeed(int n, vector<int> &a, long long total) {
        // code here
        long long l=1,r=1e9;
        while(l<r){
            long long m=l+(r-l)/2;
            if(check(m,a,total))r=m;
            else l=m+1;
        }
        return r;
    }
};