#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,fact=1;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  fact=fact*i;
 }
 printf("The factorial of the number is %d",fact);
 getch();
}
