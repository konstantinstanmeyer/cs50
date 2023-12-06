#include <stdio.h>

int get_num(void);

int main(void)
{
    /* initializing value to be in scope of while(...) call */
    int n;
    do
    {
        n = get_num();
    }
    while(n < 1);

    printf("Your number is %d\n", n);
}

int get_num(void)
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    return num;
}