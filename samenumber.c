#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k;
 clrscr();
 printf("Enter the number of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++);
   {
   printf(" ");
   }
  for(k=1;k<=i;k++)
   {
   printf("\t%d\t",i);
   }
   printf("\n");
  }
  getch();
}
