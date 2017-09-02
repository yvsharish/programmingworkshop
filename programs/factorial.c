#include<stdio.h>
int fact(int n)
{

if(n==1)
return 1;
else if(n==0)
return 0;
else
return(n*fact(n-1));
}
void main()
{
int n,f;
printf("enter the number\n");
scanf("%d",&n);
if(n>=0)
{
f=fact(n);
printf("%d\n",f);
}
else
printf("enter a valid input\n");
}

