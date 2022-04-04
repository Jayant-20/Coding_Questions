#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
int main()
{
int n,i,d;
struct node *start,*ptr,*tmp;
start=NULL;
printf("\n Number of nodes-");
scanf("%d",&n);
i=1;
while(i<=n)
{
ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=NULL;
printf("Enter data for node");
scanf("%d",&d);
ptr->data=d;
if(start==NULL)
{
start=ptr;
tmp=start;
}
else 
{
tmp->next=ptr;
tmp=tmp->next;
}
i++;
}
tmp=start;
while(tmp!=NULL)
{
printf("%d",tmp->data);
tmp=tmp->next;
}
}