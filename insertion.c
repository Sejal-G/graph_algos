#include<stdio.h>
void insertionsort(int a[],int n);
main()
{
	int n;   //variable for length of the array
	printf("enter the number of elements to be sorted\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements to be sorted\n");
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printf("the sorted elements are...\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void insertionsort(int a[],int n)
{
	int i=0,j=0,t=0;
	for(i=0;i<n;i++)
	{ 
	
		for(j=i-1;j>=0;j--)
		{
			if(a[j+1]<a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
	        }
	
		}
		
	}
}

