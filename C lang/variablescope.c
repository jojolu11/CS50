#include <stdio.h>


int triple(int n);
//Local variable scope: effect on foo because we are overwrtiing foo
int main(void)
{
    int foo = 4;
    foo = triple(foo);
    printf("foo = %i\n", foo);
}

int triple(int n)
{
    return n *= 3;
}

//Local variable scope: no effect on foo 
int triple(int n);
int main(void)
{
    int foo =4;
    int result = triple(foo);
    printf("foo: %i\n", foo);
    printf("result: %i\n", result);
}

int triple(int n)
{
    return n *= 3;
}