#include <cs50.h>
#include <stdio.h>

void hash(int n);
void space(int n);


int main(void)
{
    int height = get_int("Height: ");
    for (int i = 0; i < height; i++)
    {
        space(height - i - 1);
        hash(i + 1);
        hash(i);
        space(height - i - 1);
        printf("\n");
    }
}

void hash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}


void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}
