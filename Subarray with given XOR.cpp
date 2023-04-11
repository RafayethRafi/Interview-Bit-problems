int Solution::solve(vector<int> &A, int B) {
    
    map<int,int> mp;
    int n = A.size(),i,j;
    int xorr = 0, ans=0;
    for(i=0;i<n;i++)
    {
        xorr = xorr ^ A[i];
        if(xorr == B) ans++;
          
        int x = xorr ^ B;
        if(mp.find(x) != mp.end())
        {
            ans += mp[x];
        }
        
        mp[xorr]++;
    }
    
    return ans;
}
