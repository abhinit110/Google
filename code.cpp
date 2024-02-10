//check odd length wxpansion and then check fron i ans i+1
class Solution {
public:
    
    int countSubstrings(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int st=i;
            int e=i;
            while(true)
            {
                if(s[st]==s[e])
                {
                    ans++;
                    st--;
                    e++;
                }
                else
                break;
                if(st<0 || e>=n)
                break;
            }
            if(i+1<n)
            {
                st=i;
                e=i+1;
                while(true)
                {
                    if(s[st]==s[e])
                    {
                        ans++;
                        st--;e++;
                    }
                    else
                    break;
                    if(st<0 || e>=n)
                    break;
                }
            }
        }
        return ans;
    }
};
