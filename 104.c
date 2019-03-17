#include<stdio.h>

int main()
{
	int a[100],b,c=0,d=0,i,j;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(j=0;j<b-1;j++)
	{
	c=a[j]+a[j+1];

	d=d+c;
	
	}
	printf("\n%d",d);
}
