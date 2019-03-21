int main()
{
	int a,b,c=1,d=1,i;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	c=c*i;
	for(i=1;i<=b;i++)
	d=d*i;
	printf("%d",c/d);
}
