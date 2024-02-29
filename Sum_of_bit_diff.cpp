//logic is sum of diff comb that we can form using ith bit of every number. Formula= 2*(no of 1's)(no of 0's)
long long sumBitDifferences(int arr[], int n) {
	    long long ans=0;
	    for(int i=0;i<32;i++)
	    {
	        long long c=0;
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]&1==1)
	            c++;
	            arr[j]=arr[j]>>1;
	        }
	        ans+=2*c*(n-c);
	    }
	    return ans;
	}
