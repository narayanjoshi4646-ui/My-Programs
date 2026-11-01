

#include<stdio.h>
#include<stdlib.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo ! = 0)
    {
        iDigit = iNo % 10;

        iCount++;

         iNo = iNo / 10;
    }
    return iCount;
}

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo ! = 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;

         iNo = iNo / 10;
    }
    return iSum;
}

float AvarageDigit( int iNo)
{
     int iDigit = 0,int iSum = 0,int Count = 0;
     float fAvg = 0.0f;

     if(iNo < 0)
     {
        iNo = -iNo;
     }
     iSum = SumDigit(iNo)
     iCount = CountDigit(iNo)
   
    fAvg = (float)iSum / (float)iCount;  

     return favg;
}
int main()
{
    int iValue = 0;
    float  iRet = 0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

     fRet = AvarageDigit(iValue);

    printf(" Avarage  of digit is  :%.2f\n",iValue , iRet);

     return EXIT_SUCCESS;
}