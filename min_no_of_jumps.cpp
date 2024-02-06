//we maintain max jump continuously and increment whenever index reaches curr
int minJumps(int arr[], int n){
        // Your code here
        int mx = 0;
        int curr=0;
        int count = 0;
        for(int i = 0; i< n-1; i++)
        {
            mx = max(mx,arr[i]+i);
            if(i==curr)
            {
                count++;
                curr = mx;
            }
        }
        if(curr >= n-1)
        {
            return count;
        }
        return -1;
    }
