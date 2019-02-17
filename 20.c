int main()
{
	char a[20];
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(((a[i]>=88)&&(a[i]<=90))||((a[i]>=120)&&(a[i]<=122)))
		{a[i]=a[i]-23;}
		else
		a[i]=a[i]+3;
	}
	printf("%s",a);
}
