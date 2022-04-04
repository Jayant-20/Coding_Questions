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
int n,i,d,x;
struct node *start,*ptr,*tmp;
start=NULL;
printf("Number of nodes-");
scanf("%d",&n);
i=1;
while(i<=n)
{
ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=NULL;
printf("Enter data for node-");
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
tmp=start;
printf("Enter the data before which you have to insert a new node-");
scanf("%d",&x);
if(start==NULL)
{
printf("List is empty");
return 0;
}
else
{
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter data for new node-");
scanf("%d",&d);
ptr->data=d;
if(start->data==x)
{
ptr->next=tmp;
start=ptr;
}
else
{
while(tmp!=NULL)
{
if((tmp->next)->data==x)
{
ptr->next=tmp->next;
tmp->next=ptr;
break;
}
tmp=tmp->next;
}
}
}
tmp=start;
while(tmp!=NULL)
{
printf("%d",tmp->data);
tmp=tmp->next;
}
}