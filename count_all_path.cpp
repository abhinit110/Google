//lEulerian Cycle: An undirected graph has Eulerian cycle if following two conditions are true. 
//All vertices with non-zero degree are connected. We don’t care about vertices with zero degree because they don’t belong to Eulerian Cycle or Path (we only consider all edges). 
//All vertices have even degree.
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
