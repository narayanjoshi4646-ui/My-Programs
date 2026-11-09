#include<stdio.h>
#include<stdlib.h>

void pattern()
{   
    int i , j = 0;

    for(i = 1; i<= 3; i++)
    {

        for(j = 1; j <= 4; j++)
        {
            printf("*\t");
        }

    printf("\n\n");
    }

}

int main()
{
    pattern();

    return EXIT_SUCCESS;
}
