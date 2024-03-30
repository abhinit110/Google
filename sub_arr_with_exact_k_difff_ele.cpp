//at most k elements - atmost k-1 elements = exactly k elements
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0,j=0,n=nums.size(),ans1=0,ans2=0;;
        while(j<n)
        {
            mp[nums[j]]++;
            if(mp.size()>k)
            {
                while(mp.size()>k)
                {
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                    i++;
                }
            }
            ans1+=1+j-i;
            j++;
        }
        i=0;
        j=0;
        k-=1;
        mp.clear();
         while(j<n)
        {
            mp[nums[j]]++;
            if(mp.size()>k)
            {
                while(mp.size()>k)
                {
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                    i++;
                }
            }
            ans2+=1+j-i;
            j++;
        }
        
        return ans1-ans2;;
    }
};
