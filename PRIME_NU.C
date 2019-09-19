#include<stdio.h>
#include<conio.h>
  void main()
  {
    int i,n,flag=1;
    clrscr();
    printf("Enter The Number");
    scanf("%d",&n);
    i=2;
    while((i<=n-1)&&(flag))
    {
    if(n%i==0)
	flag=0;
    else
      i++;
    }
    if(flag==0)
	 printf("Given Number is not prime");
    else
	 printf("Given Number is prime");

   getch();
  }