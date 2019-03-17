int main()
{
	int a[100],b,c=0,d,i,j;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(j=1;j<b;j++)
	{
	c=c+a[j];
	}
	printf("\n%d",c);
}
