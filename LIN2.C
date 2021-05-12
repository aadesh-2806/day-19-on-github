#include<stdio.h>
#include<conio.h>

int main()
{
	int i,m,n,l,x,s,y,a[50],b[50],c[50][50];
	
	printf("Welcome\nEnter no,of values=\n"); 
	scanf("%d" ,&n);

	i=0;
	while(i<n)
	{
	      printf("value %d=", i+1);
	      scanf("%d", &a[i]);
	      i=i+1;
	}
	printf("\n");




				i=0;
				y=0;
				m=0;
				l=0;
				while(i<n-1)
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
						l=l+1;
						y=0;
						m=m+1;
					 }
				   i=i+1;
				}
				c[m][y]=a[i];
				b[l]=y+1;
				s=m;


				m=0;
				l=0;											//chain fragmentation

				while(m<=s)
				{       x=b[l];
					y=0;
					while(y<x)
					{
						printf("%d  ",c[m][y]);
						y=y+1;
					}
					printf("\n");
					m=m+1;
					l=l+1;

				 }
	 getch();

}
