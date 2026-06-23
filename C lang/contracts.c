#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("What's your age? ");
    float phone = get_float("What's your phone number? ");
    string location = get_string("What's your location? ");
    printf("New contract: %s, %i, %.0f, %s.\n", name, age, phone, location);
    
}