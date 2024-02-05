//logic: move end pointer till sum==s. If sum>s increse start pointer ans reduce the sum until sum<=s



vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int st=0;
        long long sum=0;
        int i=0;
        bool flag=false;
        for( i=0;i<n;i++)
        {
            if(sum==s)
            {
                flag=true;
                break;
            }
            sum+=arr[i];
            
            if(sum>s)
            {
                while(sum>s)
                {
                    sum-=arr[st];
                    st++;
                }
            }
        }
        if(sum==s)
            {
                flag=true;
                //break;
            }
        vector<int>ans;
        if(flag==false || (sum==0 && arr[st]!=0))
        {
            ans.push_back(-1);
        }
        else
        {
        ans.push_back(st+1);
        if(i==0)
        ans.push_back(min(n,i+1));
        else
        ans.push_back(min(n,i));
        }
        return ans;
    }
