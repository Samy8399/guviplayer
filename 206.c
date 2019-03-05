int main()
{
	char a[100];
	int b,i,j=0;
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if((a[i]>=65 && a[i]<=70)||(a[i]>=48 && a[i]<=57))
		j++;
	}
	if(b==j)
	printf("yes");
	else
	printf("no");
}
