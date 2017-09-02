#include<stdio.h>

void main()
{
int i,j;
long int n;
printf("Enter the number upto which u want to check\n");
scanf("%ld",&n);
long int a[n+1];
memset(a,1,sizeof(long int));
for(i=2;i*i<=n;i++)
{
 if(a[i])
{
for(j=2*i;j<=n;j+=i)
  a[j]=0;
}
}
for(i=2;i<=n;i++)
{
if(a[i])
printf("%d\n",i);
}
}

