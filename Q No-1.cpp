#include<stdio.h>
void swap(int a,int b);
int main()
{
int x,y;
printf("Enter the value of x and y\n");
scanf("%d%d",&x,&y);
printf("Value of x and y before calling the swapping function\n");
printf("%d\n%d\n",x,y); 
swap(x,y); 
printf("Value of x and y after calling the swapping function\n");
printf("%d\n%d\n",x,y);
return 0;
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
}