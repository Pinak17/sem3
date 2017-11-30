#include<stdlib.h>
#include <stdio.h>

void insert();
void delete();
void display();

#define MAX 5
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int ch,item;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        if(ch==1){
                printf("\nEnter Data to be Inserted :");
                scanf("%d",&item);
                insert(item);
        }else if(ch==2)
                delete();
        else if(ch==3)
                display();
        else if(ch==4)
                break;
        else
                printf("Wrong choice \n");
    }
    return 0;
}
void insert(int add_item)
{
    if (front == (rear+1)%MAX)
    		printf("Queue Overflow \n");
    else if(rear==-1)
    {
    		rear=front=0;
    		queue_array[rear]=add_item;
    }
    else{
        rear=(rear+1)%MAX;
        queue_array[rear]=add_item;
    }
}

void delete()
{
	int item;
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
    }
    else if(front==rear)
    {
    		item=queue_array[front];
    		front=(front+1)%MAX;
    }
    else
    {
        item=queue_array[front];
        front=(front+1)%MAX;
    }
    printf("\nDeleted item is %d ",item);
}
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}

