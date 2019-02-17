int main()
{
	char a[100];
	int b,c,d=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=b-1;i>=0;i--)
	{
	  if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
	  {
	  	d=1;
	  }
	  if(d==0)
	  printf("%c",a[i]);
	  d=0;
	}
}
