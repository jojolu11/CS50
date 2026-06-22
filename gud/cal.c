#include <cs50.h>
#include <stdio.h>

void result(int x, int y);

int main(void)
{
    int x = get_int("What's x?");
    int y = get_int("what's y?");
    result(x, y);
}

void result(int x, int y)
{
  printf("%i\n", x + y);
}