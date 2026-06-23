#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int score[6] = {10, 32, 4, 16, 8, 9};
    for (int i=0; i<6; i++)
    {
        printf("%d\n", score[i]);
    }
    return 0;
}
