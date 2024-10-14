#include<stdio.h>

void arr(int row, int col, int a[row][col]);
void display(int row, int col, int arr[row][col]);
int main()
{
	int a[2][2] = {1,2,3,4};
	//arr(2,2,a);
	display(2,2,a);
	display(2,2,a);
	display(2,2,a);
	return 0;
}

void display(int row,int col,int arr[row][col])
{
	int i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

void arr(int row,int col,int a[row][col])
{
	int i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
