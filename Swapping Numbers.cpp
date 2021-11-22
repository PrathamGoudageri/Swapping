#include<stdio.h>
 int main()  
{  
int x,y;
printf("Enter the value of x\n");
scanf("%d",&x);
printf("Enter the value of y\n");
scanf("%d",&y);   
printf("Before swap x=%d y=%d",x,y);    
x=x+y;  
y=x-y;  
x=x-y;  
printf("\nAfter swap x=%d y=%d",x,y);  
return 0;
} 
