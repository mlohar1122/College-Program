#include<stdio.h>
#include<conio.h>
 void main()
 {
   float a,b,c,d,e;
   clrscr();
	printf("Enter Number In Hindi\n");
	scanf("%f",&a);
   if(a>100)
   {
	printf("Wrong Number Enterd\n");
	printf("Please Enter Valuue 1-100\n");
	scanf("%f",&a);
    }
     printf("English\n");
     scanf("%f",&b);
   if(b>100)
   {
	printf("Wrong Number Enterd\n");
	printf("Please Enter Value 1-100\n");
	scanf("%f",&b);
    }
     printf("Math\n");
     scanf("%f",&c);
   if(c>100)
   {
       printf("Wrong Number\n");
       printf("Please Enter value 1-100\n");
       scanf("%f",&c);
    }
     printf("Scince\n");
     scanf("%f",&d);
   if(d>100)
   {
      printf("Wrong NUmber\n Please Enter Value 1-100\n");
      scanf("%f",&d);
    }
  e=(a+b+c+d)/400*100;
     printf("YourPer %f",e);
     getch();


 }