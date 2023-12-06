#include <stdio.h>

long get_num(void);

int main(void)
{
    long x = get_num();
    long y = get_num();

    float z = (float) x / (float) y;

    printf("The quotient of %i / %i is: %f\n", x, y, z);
}

long get_num(void)
{
    long num;

    printf("Enter number: ");
    scanf("%li", &num);

    return num;
}