// 8998
// 14341
// 7007

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

  bool CheckPallindrome(int iNo)
  {
    int iDigit = 0;
     int iRev = 0;
    int iTemp = 0;

    iTemp = iNo;

    while(iNo != iTemp)       // isue solved 
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+ iDigit;
        iNo = iNo/10;
    }
    if(iRev == iNo) 
    {
      return true;
    }
    else 
    {
      return false;
    }

  }
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet =  CheckPallindrome(iValue);

    if (bRet == true)
{
    printf("number is Pallindrome");
}
else 
{
    printf("number is not Pallindrome");

}
    return EXIT_SUCCESS;
}