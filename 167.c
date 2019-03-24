int main()
{
char c[100];
int i,b;
scanf("%s",c);
a=strlen(c);
for(i=2;i<a;i++)
{
if(a%i==0)
b=1;
}
if(b==1)
printf(" Not Prime");
else
printf(" Prime");
}
