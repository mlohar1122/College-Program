#include<stdio.h>
#include<conio.h>
  void main()
  {
      int yr;
      clrscr();
      printf("Enter Year\n");
      scanf("%d",&yr);
      if(((yr%4==0)&&(yr%100!=0))||(yr%400==0))
      printf("Enterd year is lech year");
      else
	printf("Enterd year is not lech");
     getch();
  }