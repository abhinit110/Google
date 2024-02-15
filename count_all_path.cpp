//logic used is eulers cycle method
int isPossible(vector<vector<int>>paths){
	    int n=paths.size();
	    int count =0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        count+=paths[i][j];
	        if(count&1)
	        return 0;
	    }
	    return 1;
	}
