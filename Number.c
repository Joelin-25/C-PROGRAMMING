#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k,a=1;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
  {
   printf("\t");
  }
  for(k=1;k<=i;k++)
  {
  printf("\t%d\t",a++);
  }
  printf("\n");
  }
  getch();
}


