#include<stdio.h>
int main()
{
    int number_of_row_and_colum,i,j;
    scanf("%d",&number_of_row_and_colum); //input row or column number.
    for(i=number_of_row_and_colum;i>0;i--) // loop for row reversly.
    {
        for(j=0;j<number_of_row_and_colum;j++) // loop for column .
        printf("%d",i); // print row number.
        printf("\n");
    }
    return 0;
}