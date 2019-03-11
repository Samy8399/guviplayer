#include<stdio.h>
int main()
{
	int a[100],b,i,j,c,d=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
	scanf("%d",&a[i]);
		}
	//printf("%d\n",a[0]);
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			c=(a[i]^[j]);
			printf("%d",c);
		}
	}
}
