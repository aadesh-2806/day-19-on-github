#include<stdio.h>
#include<conio.h>

void prime(int);
void main()
{
	int a,b,c,t;
	
	printf("hello\nenter no.=");
	scanf("%d",&a);
	
	prime(a);
	
	
	getch();
													//is_prime
}

void prime(int x)
{
	int m;
	
	m=2;
	while(m<x)
	{ 
		if(x%m==0)
		{
			printf("it is composite");
			break;
		}
		m++;
	}
	
	getch();
}
