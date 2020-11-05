
//bfs
#include<bits/stdc++.h>
using namespace std;

int visited[100009];
vector<int>graph[100009];
queue<int>q;
int main(){
	int nodes,edges,u,source,v;
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++){
		cin>>u>>v;
		visited[u]=0;
		visited[v]=0;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	//q.clear();
	cout<<"From where to begin BFS"<<endl;
	cin>>source;
	q.push(source);
	//vis[source]
	while(!q.empty()){
		int node=q.front();
		cout<<node<<" ";
		visited[node]=1;
		q.pop();
		for(int i=0;i<graph[node].size();i++){
			if(!visited[graph[node][i]])
			{
			q.push(graph[node][i]);
			visited[graph[node][i]]=true;
			}
		}
	}
}
