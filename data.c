#include<stdio.h>
int  main()
{
printf("Data In c \n");
int data[10] ,i ;
printf("Enter 10 number\n");
for(i=0;i<10;i++)
{
scanf("%d",&data[i]);
}
for(i=0;i<10;i++)
{
printf("This is the number%d",data[i]);
}
return 0;
}
