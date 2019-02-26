int main()
{
	char a[100];
	scanf("%s",a);
	int b;
	for(b=0;a[b]!='\0';b++);
	printf("%d",b);
}
