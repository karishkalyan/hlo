#include<stdio.h>
void main()
{
int n,n1,p=0,q;
printf("\n enter the number :");
scanf("%d",&n);
n1=n;
while(n!=0)
{
q=n%10;
p=p*10+q;
n/=10;
}
if(n1==q)
printf("\n given num  is a palindrome");
else
printf("\n the given mum  is not a palindrome");
getch();
}
