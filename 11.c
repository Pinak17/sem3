#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int deque[MAX];
int left=-1,right=-1;

void input_deque();
void output_deque();
void insert_left();
void insert_right();
void delete_left();
void delete_right();
void display();

int main()
{
	int option;
	printf("\n           DEQUE         \n 1.Input Restricted deque\n 2.Output Restricted deque\n Enter Your Choice : ");
	scanf("%d",&option);

	while(1){
	        if(option==1)
	                input_deque();
	        else if(option==2)
	                output_deque();
	        else{
	                printf("\nINVALID CHOICE");
	                break;
	        }
	}
	return 0;
}

void input_deque()
{
	int option;
	while(1){
		printf("\n INPUT RESTRICTED DEQUE \n 1.Insert at Right\n 2.Delete from Left\n 3.Delete from Right\n 4.Display\n 5.Quit\n Enter Your Choice : ");
		scanf("%d",&option);
		if(option ==1)
		        insert_right();
		else if(option == 2)
			delete_left();
		else if(option == 3)
			delete_right();
		else if(option == 4)
			display();
		else{
		        exit(0);
        	        break;
        	}
        }
}

void output_deque()
{
        int option;
	while(1){
		printf("\n OUTPUT RESTRICTED DEQUE \n 1.Insert at Right\n 2.Insert at Left\n 3.Delete from Left\n 4.Display\n 5.Quit\n Enter Your Choice : ");
		scanf("%d",&option);
		if(option ==1)
		        insert_right();
		else if(option == 2)
			insert_left();
		else if(option == 3)
			delete_left();
		else if(option == 4)
			display();
		else{
		        exit(0);
        	        break;
        	}
        }
}

void insert_right()
{
        int val;
        printf("\n Enter the value to be added : ");
        scanf("%d",&val);
        if((left==0 && right ==(MAX-1))||(left==(right+1))){
                printf("\n OVERFLOW!");
                return;
        }
        if(left==-1)
                left=right=0;
        else{
                if(right==(MAX-1))
                        right=0;
                else
                        right++;
        }
        deque[right]=val;
}

void insert_left()
{
        int val;
        printf("\n Enter the value to be added : ");
        scanf("%d",&val);
        if((left==0 && right ==(MAX-1))||(left==(right+1))){
                printf("\n OVERFLOW!");
                return;
        }
        if(left==-1)
                left=right=0;
        else{
                if(left==0)
                        left=MAX-1;
                else
                        left--;
        }
        deque[left]=val;
}

void delete_left()
{
        if(left==-1){
                printf("\n UNderFLOW");
                return;
        }
        printf("\n The element deleted is : %d",deque[left]);
        if(left==right)
                left=right=-1;
        else{
                if(left==(MAX-1))
                        left=0;
                else
                        left++;
        }
}

void delete_right()
{
        if(left==-1){
                printf("\n UNderFLOW");
                return;
        }
        printf("\n The element deleted is : %d",deque[right]);
        if(left==right)
                left=right=-1;
        else{
                if(right==0)
                        right=MAX-1;
                else
                        right--;
        }
}

void display()
{
        int front=left,rear=right;
        if(front==-1){
                printf("\n QUEUE is EMPTY");
                return;
        }
        printf("\n The element of the queue are : ");
        if(front<=rear){
                while(front<=rear){
                        printf("%d ",deque[front]);
                        front++;
                }
        }else{
                while(front<=(MAX-1)){
                        printf("%d ",deque[front]);
                        front++;
                }
                front=0;
                while(front<=rear){
                        printf("%d ",deque[front]);
                        front++;
                }
        }
        printf("\n");
}
