#include <stdio.h>
int main()
{
	int a[100],b,c=0,d[100],i,j,k=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	{
	c=c+a[i];
	d[i]=c;
	//	printf("%d\t",d[i]);
	}
	for(i=b-1;i>=0;i--)
	printf("%d\t",d[i]);
}
