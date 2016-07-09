#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,a,b;
clrscr();
printf("enter the number :");
scanf("%d",&n);
a=n;
while(a!=0)
{
b=a%10;
sum+=b*b*b;
a=a/10;
}
if(n==sum)
{
printf("%d it is amstrong number\n",n);
}
else
printf("It is not an amstrong number");
getch();
}
	
