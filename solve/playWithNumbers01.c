#include<stdio.h>
int main()
{
    int number_of_row_and_colum,i,j;
    scanf("%d",&number_of_row_and_colum); //input row or column
    for(i=0;i<number_of_row_and_colum;i++) //loop for row.
    {
        for(j=1;j<=number_of_row_and_colum;j++) // loop for column.
        printf("%d",j); //print column number.
        printf("\n");
    }
    return 0;
}