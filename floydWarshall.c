/*Floyd_Warshall's algorithm*/

//all pair shortest path

#include<stdio.h>
#include<stdlib.h>
#define infinty 99999
#define MAX 100
int n;
int D[MAX][MAX];
int adj[MAX][MAX];
int main(){
	int s,d;
	createG();
	Floyd_Warshall();
	while(1){
		printf("Enter source");
		scanf("%d",&s);
	}
}
void createG(){
	int origin,destin;int max_edges;
	max_edges=n*(n-1);
	for(i=0;i<max_edges;i++){
		for(j=0;j<max_edges;j++){
			printf("Source and destin\n");
			scanf("%d%d",&origin,&destin);
			if(origin<0 || origin>n || destin >n || destin <0){
				i--;
				continue;
			}
			printf("Enter wt");
			scanf("%d",&wt);
			adj[origin][destin]=wt;
		}
	}	
}
void Floyd_Warshall(){
	int i,j,k; 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(D[i][j]==0){
				D[i][j]=infinty;
				Pred[i][j]=-1;
			}
			else {
				D[i][j]=adj[i][j];
				Pred[i][j]=i
			}
		}
	}
	for(k=0;k<n;k++){
		for(i=0;i<n;i++)
		   for(j=0;j<n;j++)
        		    if((D[i][k]+D[k][j])<D[i][j]){
		        	    D[i][j]=D[i][k]+D[k][j];
		   	            Pred[i][j]=Pred[k][j];
		            }
	}
	printf("Shortest path");
	display(D,n);
	printf("predecessor");
	display(Pred,n);
}

