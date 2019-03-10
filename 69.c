int main()
{
	int a[100],b,i,j,k,l;
	scanf("%d %d",&b,&k);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	j=b-k;
	for(l=0;l<j;l++)
	printf("%d\t",a[l]);
}
