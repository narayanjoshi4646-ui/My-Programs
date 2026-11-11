/*
    output:

    A   A   A   A
    B   B   B   B
    C   C   C   C
    D   D   D   D

*/ 

#include<stdio.h>
#include<stdlib.h>

void pattern(int irow,int icol)
{   
    int i = 0 , j = 0;
    char ch ='\0';

    for(i = 1,ch; i<= irow; i++,ch++)
    {
        for(j = 1; j <= icol; j++)
        {
          printf("%c\t",ch);
        }
    }
    printf("\n\n");
    

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
