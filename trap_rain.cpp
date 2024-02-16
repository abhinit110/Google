long long trappingWater(int arr[], int n){
        // code here
        stack<int>st;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[i]>arr[st.top()])
            {
                int h=arr[st.top()];
                st.pop();
                if(st.empty())
                break;
                
                long long t=((i-st.top()-1)*(min(arr[st.top()],arr[i])-h));
                cout<<"t="<<t<<"h="<<h<<endl;
                ans+=t;
            }
            st.push(i);
        }
        return ans;
    }
