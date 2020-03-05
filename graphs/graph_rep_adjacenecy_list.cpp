// representation of graph by Adjacency List
// Pros: Saves space O(|V|+|E|) . In the worst case, 
//there can be C(V, 2) number of edges in a graph thus 
//consuming O(V^2) space. Adding a vertex is easier.

//Cons: Queries like whether there is an edge from vertex u to 
//vertex v are not efficient and can be done O(V).

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int n;// no of vertices
    cin>>n;
    
    int e;// no of edges
    cin>>e;
    
    vector<int> adj[n];
    
    int a,b;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int i=0;i<n;i++)
    {
        vector<int> v=adj[i];
        cout<<i<<"->"<<" ";
        for(int j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}
