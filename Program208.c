

#include<stdio.h>
#include<stdlib.h>

void pattern()
{
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }

    printf("\n\n");

    
    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }

    printf("\n\n");
    
    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }

    printf("\n\n");
}

int main()
{
    pattern();

    return EXIT_SUCCESS;
}
