#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *root=NULL;
void insertnode(int d){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=NULL;
	while(root->next){
		root=root->next;
	}
	root->next=temp;
	temp->next=NULL;
		
}
int main(){
	int n;
	do{
	printf("Press -1 to exit or enter data");
	scanf("%d",&n); 
	insertnode(n);
	}while(n!=-1);
	while(root!=NULL){
		root=root->next;
		printf("%d",root->data);
	}
}

