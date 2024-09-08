#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int m,n;
	cin>>m>>n;
	vector<vector<int>>mat(m,vector<int>(n));
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cin>>mat[i][j];
	    }
	}
	int row_start = 0;
	int row_end = m-1;
	int col_start = 0;
	int col_end = n-1;
	
	while(row_start <= row_end && col_start <=col_end)
	{
	    for(int col=col_start; col<=col_end; col++)
	    {
	        cout<<mat[row_start][col]<<" ";
	    }
	    row_start++;
	    for(int row = row_start; row<=row_end; row++)
	    {
	        cout<<mat[row][col_end]<<" ";
	    }
	    col_end--;
	    if(row_start<=row_end)
	    {
	        for(int col=col_end; col>=col_start; col--)
    	    {
    	        cout<<mat[row_end][col]<<" ";
    	    }
    	    row_end--;
	    }
        if(col_start<=col_end)
        {
            for(int row = row_end; row>=row_start; row--)
    	    {
    	        cout<<mat[row][col_start]<<" ";
    	    }
    	    col_start++;
        }
	}

}
