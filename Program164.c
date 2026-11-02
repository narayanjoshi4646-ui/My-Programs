// display Odd  Digit 

#include<stdio.h>
#include<stdlib.h>

void DisplayOddDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            printf("%d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayOddDigit(iValue);


     return EXIT_SUCCESS;
}