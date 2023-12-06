#include <stdio.h>

// tells C that the functions are defined at some point in code
int get_size(void);
void print_grid(int size);

int main(void)
{
    int n = get_size();

    print_grid(n);
}

void print_grid(int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_size(void)
{
    int size;

    printf("Size: ");
    scanf("%d", &size);

    return size;
}