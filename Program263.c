#include<stdio.h>
#include<stdlib.h>

void CountFrequnctX(char *str)
{
    int iCountSamll = 0, iCountCapital = 0, iCountDigit = 0, iCountSpecial = 0;

    while(*str != '\0')
    {

        if(*str <= 'A'&& *str >='Z')
        {
            iCountCapital++;
        }
         else if(*str >= 'a'&& *str <='z')
         {
            iCountSmall++;
         }
         else if(*str >= '0'&& *str <='9')
                            
         {
            iCountDigit++;
         }
         else
         {
            iCountSpecial++;
         }
         str++
    }
    printf("number of captial latters :%d\n",iCounCapital);
    printf("number of Samll latters :%d\n",iCounSmall);
    printf("number of Digit latters :%d\n",iCounDigit);
    printf("number of Special  symbol :%d\n",iCounSpecial);
}



int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iCountFrequncyX(Arr);

     return EXIT_SUCCESS;
}