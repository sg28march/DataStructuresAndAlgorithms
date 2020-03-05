// representation of graph by Adjacency Matrix
// o(1) deletion and insertion of edge
//o(v^2) space complexity

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int noOfVectrices;
    cin>>noOfVectrices;
    int a,b;
    int matrix[noOfVectrices][noOfVectrices];
    
    memset(matrix,0,sizeof matrix);//all elements to zero in 2D matrix
    
    int noOfEdges;
    cin>>noOfEdges;
    for(int i=0;i<noOfEdges;i++)
    {
        cin>>a>>b;
        matrix[a][b]=1;
        matrix[b][a]=1;
    }
    
    for(int i=0;i<noOfVectrices;i++)
    {
        for(int j=0;j<noOfVectrices;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}