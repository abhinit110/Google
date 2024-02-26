 vector<string> AllPossibleStrings(string s){
	    
	    // Code here
	    vector<string>ans;
	    int n=s.length();
	    n=pow(2,n)-1;
	    int l=s.length();
	    while(n>0)
	    {
	        int t=n;
	        string w="";
	        for(int i=l-1;i>=0;i--)
	        {
	            int d=t&1;
	            t=t>>1;
	            if(d==1)
	            w=s[i]+w;
	        }
	        ans.push_back(w);
	        n--;
	    }
	    sort(ans.begin(),ans.end());
	    return ans;
		}
