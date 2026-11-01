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

    float AvgDigit(int iTotal, int iFrequency)
    {
        float fAns = 0.0f;
        
         fAns = (float)iTotal / (float)iFrequency;

        return fAns;
    }
int main()
{
    int iValue = 0, ium = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

      iSum = SumDigit(iValue);
     iCount = CountDigit(iValue);
   
    fAvg = AvarageDigit(iSum,iCount)

    printf(" no  of digit is  :%d\n",iCount);
    printf(" summation  of digit is  :%d\n",iSum);
    printf(" Avarage  of digit is  :%.2f\n",fAvg);

    return EXIT_SUCCESS;
}