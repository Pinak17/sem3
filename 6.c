#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ST[100];
int top;

void push(char);
void pop();
void find_top();

int main()
{
	printf("\nEnter the Expression :");
	scanf("%s",ST);
	for(int i=0;ST[i]!='\0';i++){
		if(ST[i]=='(')
			push(ST[i]);
		else if(ST[i]==')')
			pop();
	}
	find_top();
	return 0;
}

void push(char a)
{
		ST[++top]=a;	
}

void pop()
{
	if(top==-1){
		printf("\nExpression is Invalid");
		exit(0);
	}else{
		top--;
	}
}

void find_top()
{
	if(top==-1)
		printf("\nExpression is Valid");
	else
		printf("\nExpression is Invalid");
}
