int main()
{
	int a[100],c[100],b,i,j,k=0;
	scanf("%d%d",&b,&j);
	for(i=0;i<b;i++){
	scanf("%d",&a[i]);}
	for(i=0;i<b;i++)
	{
		if(a[i]<j)
		printf("%d",a[i]);
	}
}
