//write a program to swap two numbers
#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter two numbers");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\nAfter swapping,First number=%d",a);
printf("\nAfter swapping,Second number=%d",b);
return 0;
}
