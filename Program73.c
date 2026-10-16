 // Input : 4
 // 1     *   2     *   3   *   4   *

#include<stdio.h>

#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;
    for (icnt = 1;icnt <= ino; icnt++)
    {
    printf("%d\t*\t",icnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequnce:\n");
    scanf("%d",&iValue);

    Display(iValue);

     return EXIT_SUCCESS;
}