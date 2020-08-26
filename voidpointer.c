#include<stdio.h> 
#include<stdlib.h> 
int main() 
{
float a; 
a=40.8; 
void *ptr=&a; 

printf("%f\n",a);
printf("%f\n",*(float*)ptr);  
}    
