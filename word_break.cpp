 bool solve(string s,int i,unordered_map<string,int>mp,int n)
    {
        if(i==n)
        return true;
        for(int k=i+1;k<=n;k++)
        {
            if(mp.find(s.substr(i,k-i))!=mp.end())
            {
                if(solve(s,k,mp,n)) return true;
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &d) 
    {
        unordered_map<string,int>mp;
        for(int i=0;i<d.size();i++)
        mp[d[i]]++;
        return solve(s,0,mp,s.length());
       
    }
