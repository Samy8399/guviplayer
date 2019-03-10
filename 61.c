int main()
{
	int a[100],b,i=0,j,k=0,c;
	scanf("%d %d",&b,&c);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	//printf("%d",a[0]);
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			//printf("%d= %d\t",a[i],a[j]);
			if(a[i]+a[j]==c)
			{
				k=1;
				break;
				//printf("%d",(a[i]+a[j]));
			}
		}
	}
	if(k==1)
	printf("yes");
	else
	printf("no");
}
