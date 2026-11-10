/*
    output:

    1   1   1   1
    2   2   2   2
    3   3   3   3
    4   4   4   4

*/ 

#include<stdio.h>
#include<stdlib.h>

void pattern(int irow,int icol)
{   
    int i = 0 , j = 0;

    for(i = 1; i<= irow; i++)
    {

        for(j = 1; icol <= icol; j++)
        {
            printf("%d\t",i);
        }

    printf("\n\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;
    
    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    
    printf("Enter number of colums : \n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
