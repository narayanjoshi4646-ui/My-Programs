
#include<stdio.h>
#include<stdlib.h>

int Factorial (int ino)
{
     int iCnt = 0,iFact = 0;
     iFact = 1;

    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        iFact = iFact *iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    int iCnt = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

       iRet = Factorial(iValue);

       printf("Factorial is :%d\n",iRet);

    return EXIT_SUCCESS;
}