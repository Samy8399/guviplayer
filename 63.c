int main()
{
	int a[100],c[100],b,i,j,k=0;
	scanf("%d",&b);
	for(i=0;i<b;i++){
	scanf("%d",&a[i]);}
	for(i=0;i<b;i++){
	scanf("%d",&c[i]);}
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d=%d\t",a[i],c[j]);
			if(a[i]==c[j])
			{
				printf("%d\t",c[j]);
				c[j]=0;
			}
		}
	}
}
