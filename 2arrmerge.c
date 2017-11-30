#include <stdio.h>

int array1[50], array2[50], array3[100];

void insert1(int x)
{
    
    printf("\n Enter sorted elements for the array 1: \n");
    for (i = 0; i < x; i++)
        scanf("%d", &array1[i]);
}

void insert2(int x)
{
    
    printf("\n Enter sorted elements for the array 2: \n");
    for (i = 0; i < x; i++)
        scanf("%d", &array2[i]);
}

void merge(int m,int n,int k)
{
	int i=0,j=0;
	while (i<m && j<n){
        if (array1[i] < array2[j]){
            array3[k] = array1[i];
            i++;
        }else{
            array3[k] = array2[j];
            j++;
        }
        k++;
    }
    if (i>=m){
        while (j<n)
        {
            array3[k] = array2[j];
            j++;
            k++;
        }
    }
    if (j >= n){
        while (i < m)
        {
            array3[k] = array1[i];
            i++;
            k++;
        }
    }
}

void display(int m, int n)
{
	int i;
	for (i = 0; i < m + n; i++)
        	printf("\n%d", array3[i]);
	printf("\n");
}

int main()
{
    int m, n, k = 0;
    printf("\n Enter size of array Array 1: ");
    scanf("%d", &m);
	insert1(m);
	printf("\n Enter size of array Array 2: ");
    scanf("%d", &n);
    insert2(n);
    
	merge(m,n,k);   
	
	printf("\n After merging: \n");
	display(m,n);
}
