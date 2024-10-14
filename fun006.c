#include<stdio.h>
void sum_fun(int row,int col,int arr[row][col])
{
    int i,j;
    printf("Your datas:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int sum[2][2];
    int i,j;
    printf("enter the datas:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&sum[i][j]);
        }
    }
    /*
    printf("Your datas: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    } */
   
    sum_fun(2,2,sum);

    return;
}