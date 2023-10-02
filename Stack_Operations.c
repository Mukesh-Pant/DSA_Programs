#include<stdio.h>
#include <stdlib.h>
#define size 10
struct stack
{
    int data[size];
    int top;
};
void push(struct stack *s)
{
    if(s->top==size-1)
    {
        printf("\nSTACK IS FULL process ended !!!");
        exit(0);
    }
    else
    {
        int x;
        printf("\n Enter the data to push:  ");
        scanf("%d",&x);
        s->data[++s->top]=x;
    }
}
void pop(struct stack *s)
{
    if(s->top==-1)
    {
        printf("\n STACK IS EMPTY process ended !!!");
        exit(0);
    }
    else
    {
        int x;
        x=s->data[s->top--];
        printf("The poped data is %d\n",x);
    }
}
void traverse(struct stack *s)
{
    if(s->top==-1)
    {
        printf("\n STACK IS EMPTY process ended !!!");
        exit(0);
    }
    else
    {
        printf("\nThe stack items are :\n");
        for(int i=s->top;i>=0;i--)
        {
            printf("%d",s->data[i]);
            printf("\n");
        }
    }
}
void main()
{
    struct stack *s;
    s=(struct stack *)malloc(size*sizeof(struct stack *));
    s->top=-1;
    int option,choice;
    do
    {
        printf("\n***************************************\n\n");
        printf(" 1. PUSH Operation\n");
        printf("\n***************************************\n\n");
        printf(" 2. POP Operation\n");
        printf("\n***************************************\n\n");
        printf(" 3. TRAVERSE Operation\n");
        printf("\n***************************************\n\n");
        printf("\n Enter your choice:  ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: push(s);
                    break;
            case 2: pop(s);
                    break;
            case 3: traverse(s);
                    break;
            default : printf("\nYou entered wrong choice\n");
        }
        printf("\nPress 1 to continue & 2 to exit the process   ");
        scanf("%d",&choice);
    } while (choice!=2);
}