#include<stdio.h>  
#include<stdlib.h>  
int main()    
{    
int a, b;
scanf("%d",&a);
scanf("%d",&b);
printf("a=%d b=%d",a,b);       
a=a*b;  
b=a/b;    
a=a/b;   
printf("a=%d b=%d",a,b);       
return 0;  
} 
