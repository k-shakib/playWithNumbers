#include<stdio.h>
int main()
{
    int number_of_row_and_colum,i,j;
    scanf("%d",&number_of_row_and_colum); //input row or column number.
    for(i=0;i<number_of_row_and_colum;i++) // loop for row.
    {
        for(j=number_of_row_and_colum;j>0;j--)  // loop for column reversly .
        printf("%d",j);  // print column.
        printf("\n");
    }
    return 0;
}