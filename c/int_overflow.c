#include <stdio.h>

int get_num(void);

int main(void)
{
    printf("While using the int type, the bites allocated for such a value only allows values up to ~2 billion to be represented.\n");

    printf("That means that if add two values greater than 2 billion, for example, the output will be incorrect.\n");

    printf("Try for yourself!\n");

    int x = get_num();
    int y = get_num();

    int sum = x + y;

    printf("Here is the incorrect output: %d\n", sum);
}

int get_num(void)
{
    int n;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    while(n != 2000000000);

    return n;
}