

#include<stdio.h>
#include<stdlib.h>

 unsigned long long  Factorial (int ino)
{
     int iCnt = 0;
   unsigned long long int iFact = 0;

    for(iCnt = 1 , iFact = 1; iCnt <= ino; iCnt++)
    {
        iFact = iFact *iCnt;
    }
    return iFact; 
}

int main()
{
    int iValue = 0;
 unsigned  long long iRet = 0;
    int iCnt = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

       iRet = Factorial(iValue);

       printf("Factorial is :%lld\n",iRet);

    return EXIT_SUCCESS;
}