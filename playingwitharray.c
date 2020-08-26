#include<stdio.h>
int main()
{
printf("Name and Number\n");
int number[5],initalize;
char name[5], incre;
printf("Enter Number First\n");
for(initalize=0;initalize<5;initalize++)
{
scanf("%d",&number[initalize]);
}
printf("Enter Name\n");
for(incre=0;incre<5;incre++){
scanf("%s",&name[incre]);
}
return 0;
}
