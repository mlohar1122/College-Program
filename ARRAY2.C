#include<stdio.h>
#include<conio.h>
 void main()
{
  int a[10],i,j,n,x;
  clrscr();
  printf("Enter the size of Array\n");
  scanf("%d",&n);
  printf("Enter the Elements\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Enter the Element you want to delete\n");
  scanf("%d",&x);
 for(i=0;i<n;i++)
 {
  if(a[i]==x)
 {
   for(j=i+1;j<n;j++)
    a[j-1]=a[j];
    printf("Element delete sucessfully\n");
    break;
   }
  }
 printf("Element of an array are as follow\n");
 for(i=0;i<n-1;i++)
 printf("%d\n",a[i]);
 getch();
 }

