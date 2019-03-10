int main()
{
	int a,b,i,j,k;
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			b=a/i;
		}
		if(b%2!=0)
		{
			printf("%d\t",i);
			break;
		}
	}
}
