#include<stdio.h>
#include<conio.h>
  void main()
 {
   int n,i,sum;
   clrscr();
   printf("Enter Number\n");
   scanf("%d",&n);
   sum=0;
   i=1;

  k10: if(n!=0)
  {
     i=n%10;
     n=n/10;
     sum=sum+i;
     goto k10;
   }
    printf("%d",sum);
  getch();
 }
