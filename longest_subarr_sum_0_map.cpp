class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int max_len=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            nums[i]=-1;
        }
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==0)
            max_len=i+1;
            if(m.find(sum)!=m.end())
            {
                max_len=max(max_len,i-m[sum]);
            }
            else
            {
                m[sum]=i;
            }
        }
        return max_len;
    }
};
