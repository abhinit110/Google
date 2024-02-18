 void heapify(int a[],int dep[],int n,int i)
{
   int largest=i;
   int l=2*i+1;
   int r=2*i +2;
   if(l<n && a[l]>a[largest])
   {
       
       largest=l;
   }
    
   if(r<n && a[r]>a[largest])
   {
        
        largest=r;
   }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        swap(dep[i],dep[largest]);
        heapify(a,dep,n,largest);
    }
}
void heap_sort(int a[],int dep[],int n)
{
  for(int i=n/2 -1;i>=0;i--)
  {
      heapify(a,dep,n,i);
  }
  for(int i=n-1;i>=0;i--)
  {
      swap(a[0],a[i]);
      swap(dep[0],dep[i]);
      heapify(a,dep,i,0);
  }
}
    int findPlatform(int arr[], int dep[], int n)
    {
        priority_queue<int,vector<int>,greater<int>>q;
        int ans=0;
        heap_sort(arr,dep,n);
    	for(int i=0;i<n;i++)
    	{
    	    if(q.empty())
    	    {
    	        q.push(dep[i]);
    	        int s=q.size();
    	        ans=max(ans,s);
    	    }
    	    else
    	    {
    	        while(!q.empty() && arr[i]>q.top())
    	        q.pop();
    	        q.push(dep[i]);
    	        int s=q.size();
    	        ans=max(ans,s);
    	    }
    	    
    	}
    	return ans;
    }
