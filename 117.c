int main()
{
	char a[100],b,i,j;
	scanf("%s",a);
	b=strlen(a);
	for(i=b-1;i>=1;i--)
	printf("%c-",a[i]);
	printf("%c",a[0]);
}
