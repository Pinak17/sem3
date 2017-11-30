#include<stdio.h>

void ins(int,int);
int del(int);
void display();

int arr[10];

int main()
{
	int ch,item,pos;
	while(1){
		printf("\n1:Insert\n2:Delete\n3:Display\n4:Exit\nEnter Your Choice: ");
		scanf("%d",&ch);
		
		if(ch==1){
			printf("\nEnter Data :");
			scanf("%d",&item);
			printf("\nEnter Position :");
			scanf("%d",&pos);
			ins(item,pos);
		}else if(ch==2){
			printf("\nEnter Position :");
			scanf("%d",&pos);
			item=del(pos);
			printf("\nDeleted Item is %d",item);
		}else if(ch==3)
			display();
		else if(ch==4)
			break;
		else
			printf("\nInvalid Choice!!!");
	}
	return 0;
}

void ins(int item,int pos)
{
	if(pos>=10)
		printf("\nArray is Full");
	else
		arr[(pos-1)]=item;
}

int del(int pos)
{
	int item=0;
	if(pos>=10 || pos<=0)
		printf("\nPosition Error!");
	else{
		item=arr[pos-1];
		int i;
		for(i=pos-1;i<9;i++){
			arr[i]=arr[i+1];
		}
	}
	return item;
}

void display()
{
	int j;
	for(j=0;j<10;j++)
		printf("\nElement %d :%d",(j+1),arr[j]);
}
