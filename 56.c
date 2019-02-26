int main()
{
 char a[10],b[10];
 int i,j,d=0,c,e;
 scanf("%s",&a);
 scanf("%c",&b);
 for(i=0;a[i]!='\0';i++);
 c=i;
 for(i=0;i<c;i++)
 {
 	if(b==a[i])
 	{
 		d=i+1;
 	}
 
 }
 printf("%d",d);
 }
