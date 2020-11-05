/*bfs*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 999
#define initial 1
#define waiting 2
#define visited 3
int rear=-1,front=-1;
int n,adj[MAX][MAX],state[MAX];
void create();
void bfs_traversal();
void bfs(int v);


main(){
	create();
	bfs_traversal();
}
void create(){
	int i,origin,destin,maxedges;
	printf("Enter the no of vertices");
	scanf("%d",&n);
	maxedges=n*(n-1);
	for(i=0;i<maxedges;i++){
		printf("Enter the origin and destin");
		scanf("%d%d",&origin,&destin);
		if(origin!=-1 && destin!=-1)
		adj[origin][destin]=1;
		else break;
	}
}
void bfs_traversal(){
	int v;
	for(v=0;v<n;v++){
		state[v]=initial;
	}
	printf("Enter the starting vertex");
	scanf("%d",&v);
	bfs(v);
}

void bfs(int v){
	int i;
	enqueue(v);
	state[v]=waiting;
	while(!isempty()){
		v=dequeue();
		state[v]=visited;
	    for(i=0;i<n;i++){
	    	if(adj[v][i]==1 && state[i]=intial){
	    		enqueue(i);
	    		state[i]=waiting;
			}
		}
	}
	printf("\n");   
}
void enqueue(int i){
	if(rear==MAX-1)
	  printf("Overflow");
	if(front==-1)
	  front=0;
	queue[++rear]=i;
}
int dequeue(){
	if(front=-1 || front>rear)
	{ printf("empty"); exit(1);
    }
	return queue[front++];
}
bool isempty(){
	if(front==-1 || front>rear)
	 return 1;
	else 
	 return 0; 
}
