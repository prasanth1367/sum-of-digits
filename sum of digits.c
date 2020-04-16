#include<stdio.h>
int sum (int a,int b)
{
int c;
c=a+b;
return(c);
}
main()
{
int x,y,z;
printf("enter the number");
scanf("%d%d",&x,&y);
z=sum(x,y);
printf("%d",z);
}
