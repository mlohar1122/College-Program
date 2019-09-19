#include<stdio.h>
#include<conio.h>
  void main()
  {
     int i,sum,count;
     clrscr();
     i=2;
     sum=0;
     count=0;
     while(count<5)
      {
	if(i%2==0)
	{
	  sum=sum+i;
	  count++;
	}
	  i++;
	}
       printf("Sum of the even number %d\n",sum);

  getch();
  }