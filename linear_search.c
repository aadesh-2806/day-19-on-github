#include<stdio.h>

void main()
{	
	int i,k,n,a[50];
	 
	printf("hello aadesh agrawal(2019uec1660)\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter number to search=");
	scanf("%d",&k);

	for(i=0;i<n;i++)
	{	
		if(k==a[i])
		{
			printf("%d position",i+1);
		}
	}
	getch();
}
