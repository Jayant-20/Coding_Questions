#include<stdio.h>
int*fun(int*p,int n);
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10},n,*ptr;
n=5;
ptr=fun(arr,n);
printf("arr=%u,ptr=%u,*ptr=%d\n",arr,ptr,*ptr);
}
int*fun(int*p,int n)
{
p=p+n;
return p;
}