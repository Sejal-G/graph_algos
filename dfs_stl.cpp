#include<bits/stdc++.h>
using namespace std;

void DFS(int v,vector< pair< int,int > >adj[],vector< bool > &visited){
	visited[v]=true;
	cout<< u < " ";
	for(int i=0;i<adj[v].size();i++){
		if(visited[adj[v][i]]==false)
			DFS(adj[v][i],adj,visited);
	}	
}
void DFSUtil(vector< pair< int,int > > adj[],int v){
	vector< bool > visited(v,false);
	for(int i=0;i<v;i++){
		if(visited[i]==false){
			DFS(i, adj, visited);
		}
	}	
}
int main(){
	int vertex=5;int u,v,wt;
	vector< pair< int,int > adj[vertex];
	for(int i=0;i<vertex*vertex;i++){
		cout << "Enter u,v,wt";
		
		cin >> u,v,wt;
		if(u==-1 && v=-1) break;
		adj[u].push_back(make_pair(v,wt));
		adj[v].push_back(make_pair(u,wt));	
	}
	DFSUtil(adj,vertex); 
}
