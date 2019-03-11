#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],b,i,j,c,d=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
	scanf("%d",&a[i]);
		}
	printf("%d",a[0]);
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			c=(a[i]|a[j]);
			if(c>d)
			d=c;
		}
	}
	printf("%d",d);
}
