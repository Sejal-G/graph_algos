#include<bits/stdc++.h>
using namespace std;
int main(){
	int y=0,N,c,cost=1000,z=0;
	scanf("%d%d",&N,&c);
	if(N <= 1000)
	{while(z!=1){
	    y++;
	    printf("1 %d\n",y);
	    fflush(stdout);
	    cost=cost-1;
	    scanf("%d",&z);
	    fflush(stdin);
	}
	printf("2\n");
	fflush(stdout);
	cost=cost-c;
	printf("3 %d\n",y);
	fflush(stdout);
	}
	else{
	    y=0;
	    while(z!=1){
	        y=y+500;
	        printf("1 %d\n",y);
	        fflush(stdout);
	        scanf("%d",&z);
	        fflush(stdin);
	        cost=cost-1;
	    }
	    printf("2 %d",y);
	    cost=cost-c;
	    y=y-500-1;
	    while(z!=1){
	        y++;
	        printf("1 %d",y);
	        fflush(stdout);
	        scanf("%d",&z);
	        cost--;
	    }
	    printf("2 %d",y);
	}
	
}
