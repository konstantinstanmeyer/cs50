#include <stdio.h>

int main(void)
{
    /* this s */
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("hello, %s!\n", name);

    return 0;
}