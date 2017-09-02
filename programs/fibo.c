#include<stdio.h>


void main()
{
int n,t1=0,t2=1,nexttem,i;
printf("enter the number untill which u want the fibo series\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d\n",t1);
nexttem=t1+t2;
t1=t2;
t2=nexttem;
}

}
