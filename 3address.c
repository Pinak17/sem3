#include<stdio.h>
int main()
{
	int row,col,rowadd=0,coladd=0,rowpos,colpos;
	printf("Enter the upper limit of the row :");
	scanf("%d",&row);
	printf("Enter the upper limit of the column :");
	scanf("%d",&col);
	
	int array[row][col];
	
	printf("\nEnter position of the row : ");
	scanf("%d",&rowpos);
	printf("\nEnter position of the column : ");
	scanf("%d",&colpos);
	
	unsigned int arr=array;
	
	rowadd=  arr+((col*rowpos)+colpos)*sizeof(int);
	coladd=  arr+((row*colpos)+rowpos)*sizeof(int);
	printf("\nAddress of the desired position in row major form : %u",rowadd);
	printf("\nAddress of the desired position in column major form : %u",coladd);
	printf("\n");	
	return 0;
}