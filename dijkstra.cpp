/* Dijkstra's algorithm*/

//single source shortest path
#include<stdio.h>
#define NIL -1
#define MAX 10
#define temp 0
#define perm 1
#define infinty 99999
int n;
int pathlength[MAX],predecessor[MAX],status[MAX],adj[MAX][MAX];
void createG();
void createG(){
	int i,j, max_edges,origin, destin;
	max_edges=n*(n-1);int wt;
	for( i=0;i<max_edges;i++){
		for(j=0;j<max_edges;j++){
			printf("enter origin and destination");
			scanf("%d %d", &origin, &destin);
			if(origin < 0 || origin > n || destin<0 || destin < n){
				i--;continue;
			}
			printf("enter the weight");
			scanf("%d",&wt);
		    adj[origin][destin]=wt;
		}
	}
}
void Dijkstra(int s)
{
	int i,current;
	for( i=0;i<n;i++){
		predecessor[i]=NIL;pathlength[i]=infinty;
		status[i]=temp;
	}
	pathlength[s]=0;
	while(1){
		current=min_temp();
		if(current==NIL)
			return;
		status[current]=perm;
		for( i=0;i<n;i++){
			if(adj[curent][i]!=0 && status[i]=temp){
				if(pathlength[current]+adj[current][i] < pathlength[i]){
					preedecessor[i]=current;
					pathlength[i]=pathlength[i]+adj[current][i];
				}
			}
		}	
		
	}
}

int min_temp(){
	int i;
	int min=infinty;
	for(i=0;i<n;i++){
		if(status[i]==temp && pathlength[i]<min)
		{
		    k=i;min=pathlength[i];
    	}
    }
	return k;	
}
void findpath()
int main(){
	int s;
	createG();
	printf("source vertex ");
	scanf("%d",s);
	Dijkstra(s);
	/*while(1){
		printf("enter destination")
	}*/
}
