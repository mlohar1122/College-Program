#include<stdio.h>
#include<conio.h>
 void main()
{
    int i,sum,n;
    clrscr();
    printf("Enter Number");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
    {
      sum=sum+i;
      i++;
    }
      printf("%d",sum);
   getch();
}
