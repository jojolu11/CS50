#include <stdio.h>
#include <cs50.h>

void meow(int times);
int get_n(void);



int main(void)
{
    meow(get_n());
}

void meow(int times)
{
    for (int i = 0; i < times; i ++)
    {
        printf("meow\n");
    }
}

int get_n(void)
{
    int n;
    do
    {
        n = get_int("How many meows? ");
    }
    while (n < 1);
    return n;
}