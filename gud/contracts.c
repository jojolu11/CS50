#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("Name: %s\n", name);
    int age = get_int("What's your age? ");
    printf("Age: %i\n", age);
    float phone = get_float("What's your phone number? ");
    printf("Phone: %.0f\n", phone);
    string location = get_string("What's your location? ");
    printf("Location: %s\n", location);
    printf("New contract: %s, %i, %.0f, %s.\n", name, age, phone, location);
}
