 // Input : 4
 // 4   3   2   1

#include<stdio.h>

#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;
    for (icnt = ino ;icnt >= 1; icnt--)
    {
    printf("%d\t",icnt);
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