#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,q,x,b[50],c[50],m,j;
	char a[50][50],d[50][50];
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("enter string %d=",i+1);
		gets(a[i]);
		r=0;
		for(s=0;a[i][s]!='\0';s++)
		{
			r++;
		}
		b[i]=r;
	}
	m=b[0];
	for(s=1;s<n;s++)
	{
		if(m>b[s])
		{
			m=b[s];
			x=s;
		}
	}
	r=0;j=0;
	q=0;
	for(s=0;s<m;s++)
	{
		for(t=0;t<n;t++)
		{
			if(a[x][s]!=a[t][s])
			{
				break;
			}
		}
		if(t==n)
		{
			r++;
			d[q][j++]=a[x][s];
		}
		else
		{
			c[q++]=r;
			r=0;j=0;
		}
	}
	m=c[0];
	for(s=1;s<q;s++)
	{
		if(m<c[s])
		{
			m=c[s];
			r=s;
		}
	}
	puts(d[r]);
	
	getch();
}
