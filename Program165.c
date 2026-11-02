
#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            printf(" Odd :%d\n",iDigit);
        }

        else
        {
           printf(" even :%d\n",iDigit); 
        }
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);


     return EXIT_SUCCESS;
}