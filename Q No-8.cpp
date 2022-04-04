#include<stdio.h>
int x=10;
void display1();
void display2();
int main()
{
printf("x=%d",x);
x++;
printf("x=%d",x);
display1();
display2();
printf("x=%d",x);
}
void display1()
{
printf("x=%d",x);
x=x+4;
display2();
printf("x=%d",x);
}
void display2 ()
{
printf("x=%d",x);
x=x+5;
}