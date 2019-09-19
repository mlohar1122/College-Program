#include<stdio.h>
#include<conio.h>
 void main()
 {
   int r,h,n,t;
   clrscr();
   printf("Enter Number\n");
   scanf("%d",&n);
    r=0;
   while(n!=0)
   {
     t=h%10;
     n=n/10;
     r=r*10+t;
   }
    printf("Reverse of enterd Number %d",r);
    getch();
 }
