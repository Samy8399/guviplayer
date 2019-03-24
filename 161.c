#include<stdio.h>
#include<string.h>
int main()
{
	char a[100][100],b[100],c[100];
	int d,e=0,i,j,k,f=0;
	scanf("%d\n",&d);
	for(i=0;i<d;i++)
	scanf("%s",a[i]);
	for(i=0;i<d;i++)
	{
		e=0;
		strcpy(b,a[i]);
		k=strlen(b);
		for(j=0;j<k;j++)
		{
			if(((b[j]=='a')||(b[j]=='A'))||((b[j]=='e')||(b[j]=='E'))||((b[j]=='i')||(b[j]=='I'))||((b[j]=='o')||(b[j]=='O'))||((b[j]=='U')||(b[j]=='u')))
			{
				e=1;
			}
		}
		if(e==1)
		f++;
	}
	if(f==d)
	printf("yes");
	else
	printf("no");
}
