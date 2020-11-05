/*
 Warshall Algorithm
*/
#include<iostream>
#define MAX 100
void create(int n){
	max_edges=n*(n-1);
	for(int i=1;i<max_edges;i++){
		scanf("%d %d", &origin, &destin);
		if(origin>=n || dest>=n || origin <0 || dest>0){
			i--;
		}
		else adj[origin][dest]=1;
	}
}
int main(){
	int i,j,k;
	int P[MAX][MAX];
	scanf("%d",&n);
	create(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			P[i][j] = adj[i][j];
			
		}
	}
	for(k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(j=0;j<n;j++){
				P[i][j]=(P[i][j] || p)
			}
		}
	}
	
}
