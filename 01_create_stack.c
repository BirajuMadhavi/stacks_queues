struct node{
int data;
struct node *next;
};

struct node *push(struct node *,int);
struct node *display(struct node *front);
struct node *pop(struct node *);
#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node *top=NULL;
int val,choice;
for( ; ; )
{
printf("Enter choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("Enter value\n");
scanf("%d",&val);
top=push(top,val);
break;
}
case 2:
{
    top=pop(top);
    break;
}
case 3:
{
top=display(top);
break;
}
}
}
}

struct node *push(struct node *top,int val)
{
struct node *t1,*temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
if(top==NULL)
{
temp->next=NULL;
top=temp;
}
else
{
temp->next=top;
top=temp;
}
return top;
}

struct node *display(struct node *top)
{
struct node *t1=top;
while(t1!=NULL)
{
printf("%d ",t1->data);
t1=t1->next;
}
return top;
}

struct node *pop(struct node *top)
{
    struct node *t1=top;
    top=top->next;
    free(t1);
    return top;
}

