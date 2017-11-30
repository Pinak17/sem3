#include<stdio.h>
#define MAX 10

int ST[MAX];
int top;

void push(int);
int pop();
void display();

int main()
{
	top=-1;
	int ch,item;
	while(1){
		printf("\n1: Push\n2: Pop\n3: Display\n4: Exit\nEnter Your Choice :");
		scanf("%d",&ch);
		
		if(ch==1){
			printf("Enter Data to be Pushed :");
			scanf("%d",&item);
			push(item);
		}else if(ch==2){
			item=pop();
			if(item!=0)
				printf("\nItem is %d",item);
			else

				printf("\nStack is underflowen");
		}else if(ch==3)
			display();
		else if(ch==4)
			break;
		else
			printf("\nInvalid Choice!!!");
		
	}
	return 0;
}

void push(int item)
{
	if(top<MAX-1)
		ST[++top]=item;
	else
		printf("\nStack is Full");
}

int pop()
{
	int item=0;
	if(top>-1)
		item=ST[top--];
	return item;
}

void display()
{
	for(int i=0;i<top+1;i++){
		printf("\nElement %d is %d",(i+1),ST[i]);
	}
}
