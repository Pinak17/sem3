#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;
 
int topelement();
void push(int data);
void pop();
void display();
void stack_count();
void create();
 
int count = 0;
 
int main()
{
    int no, ch, e;
 
    printf("\nImplementation of Stack using Linkedlist:\n");
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Exit");
    printf("\n4.Dipslay");
    printf("\n5.Stack Count\n");
    
    create();
 
    while (1)
    {
        printf("\nEnter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            exit(0);
        case 4:
            display();
            break;
        case 5:
            stack_count();
            break;
        default :
            printf("Wrong choice!! Please enter correct one");
            break;
        }
    }
}
 
void create()
{
    top = NULL;
}
 
void stack_count()
{
    printf("\nNumber of elements in stack are: %d\n", count);
}
 
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}
 
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack is empty!!\n");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("\n%d", top1->info);
        top1 = top1->ptr;
    }
 }
 
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nError!! Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\nPopped value is: %d\n", top->info);
    free(top);
    top = top1;
    count--;
}
