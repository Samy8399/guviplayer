int main()
{
	int a[100],b,c=0,d,i,j;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	c=c+a[i];
	for(i=0;i<b;i++)
	printf("%d\t",a[i]+c);
}
