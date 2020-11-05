#include<stdio.h>
#include<stdlib.h>
#define M 5 /*order of tree*/
#define MAX M-1 /*maximum permissible keys*/
#if M%2==0
  #define CEIL_Mdiv2 (M/2)
#else 
  #define CEIL_Mdiv2 (M+1)/2
#endif
#define MIN (ceil_Mdiv2-1)   
struct node{
	int count;
	int key[MAX+1]
	struct node *child[MAX+1]
};

struct node* search(int skey,struct node *p, int *pn){
	int found;
	if(p==NULL)   /*Base case 1:if key not found*/
	   return NULL;
	found=search_node(skey,p,pn);
	if(found)     /*key found*/   
		return p;
	else
	    return search(skey,p->child[*pn],pn);
}
int search_node(int skey,struct node *p,int *pn){
       if(skey< p->key[1])  /*skey less than leftmost key*/
       {
       	    *pn=0;
       	    return 0;
	   }
	   *pn=p->count;
	    while((skey<p->key[*pn]) && *pn>1)
	        (*pn)--;
	    if(skey == p->key[*pn])
	        return 1;
	    else 
		    return 0;     
}
struct node* Insert{
	int k, taller;
	struct node *krchild,temp;
    taller = rec_ins(ikey,proof,&k,&krchild);
    if(taller){
    	temp=(struct node *)malloc(sizeof(struct node));
    	temp->count =1;
    	temp->child[0]=proot;
    	temp->key[1]=k;
    	temp->child[1]=krchild;
    	proot=temp;
	}
	return proot;
}

int rec_ins(int ikey, struct node *p,int  *pk, struct node**pkrchild){
	int n;
	int flag;
	if(p==NULL){
		*pk=ikey;
		*pkrchild =NULL; return 1;
	}
	if(search_node(ikey,p,n)){
		printf("duplicacy");
		return 0;
	}
	flag = rec_ins(ikey, p->child(n),pk,pkrchild);
	if(flag){
		if(p->count < MAX)
		 {
		 	insertByShift(*pk, *pkrchild,p,n)
			 return 0;
		 }
		 else {
		 	split(*pk, *pkrchild,p,n,pk,pkrchild);
		 	return 1;
		 }
	}
	return 0;
}

int main(){
	struct node *root=NULL, *ptr;
	int key,choice,n;
	while(1){
		printf("1. Search   2. Insert    3. exit\n    ");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("enter search value");
			        scanf("%d",&key);
			        if(ptr = search(key, root, &n)==NULL)
			           printf("key not present\n");
			        else 
					   printf("Node %p, pos  %d\n", ptr,n);
					break;    
			case 2: printf("enter key to be inserted");
			        scanf("%d",&key);
			        insert(key, root)
			        break;
			case 3: exit(1);
			default: printf("wrong choice\n");
			         break; 		    	
		}
	}
}
