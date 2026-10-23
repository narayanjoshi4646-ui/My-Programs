
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 void CheckPrime(int ino)
 {
    int iCnt =0;
    int iSum =0;

    for(iCnt = 1; iCnt<= ino/2; iCnt++)
    {
        if((ino % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == 1)
    {
        printf("it is prime number\n");
    }
    else
    {
        printf("it is  not a  prime number\n");

    }
 }
int main(void)
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}