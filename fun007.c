#include<stdio.h>
// void getting_data(int,int,int );
void getting_data(int row,int col,int[row][col] );
void display_data(int row,int col,int arr[row][col]);
void sum(int row,int col,int arr1[row][col],int arr2[row][col]);
int main()
{
    int arr_1[2][2],arr_2[2][2],i,j;
    getting_data(2,2,arr_1);
    display_data(2,2,arr_1);
    getting_data(2,2,arr_2);
    display_data(2,2,arr_2);
    sum(2,2,arr_1,arr_2);
    return 0;
}

void display_data(int row, int col, int arr[row][col])
{
    printf("your datas:\n");
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void getting_data(int row, int col, int arr[row][col])
{
    int i,j;
    printf("enter the datas:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void sum(int row, int col, int arr1[row][col], int arr2[row][col])
{
    int i,j;
    printf("your summation data: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}