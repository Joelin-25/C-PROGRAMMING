#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  printf("Number of rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    for(k=0;k!=2*i-1;k++)
    {
    printf("*");
    }
    printf("\n");
  }
  getch();
}
