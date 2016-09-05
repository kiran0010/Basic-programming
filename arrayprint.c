#include<conio.h>
#include<stdio.h>

void main()
{
    int i,j,a[10],n;
    n=9;
    i=1;
    for(j=0;j<=n;j++)
    {
      a[j]=i;
      i=i+1;
      printf("\n %d",a[j]);
    }
    getch();
}
