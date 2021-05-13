#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,l,x,s,y,a[50],b[50],c[50][50];

	
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);
					//only longest chain
	for(i=0;i<n;i++)
	{
	      printf("value %d=", i+1);
	      scanf("%d", &a[i]);
	}

	y=0;m=0;l=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		 {
		     c[m][y]=a[i];
		     y=y+1;
		 }
		 else
		 {
			c[m][y]=a[i];
			b[l]=y+1;
			l++;
			y=0;
			m++;
		 }
	} 
	c[m][y]=a[i];
	b[l]=y+1;

	x=b[0];l=1;s=0;
	while(l<=m)
	{
		if(x<b[l])
		{
			x=b[l];
			s=l;
		}
		l++;
	}
	m=s;
	for(i=0;i<x;i++)
	{
		printf("%d",c[m][i]);
	}

	 getch();
}
