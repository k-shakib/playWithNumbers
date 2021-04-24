#include<stdio.h>
int main()
{
    int number_of_row_and_colum,i,j;
    scanf("%d",&number_of_row_and_colum); //input row or maximum column number.
    for(i=1;i<=number_of_row_and_colum;i++) // loop for row number.
    {
        for(j=1;j<=i;j++) // loop for column number. starting from 1 and stop at row number(i).
        printf("%d",j); // print column number.
        printf("\n");
    }
    return 0;
}