#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Before: \n");

    char word[20];

    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            printf("%c", word[i] - 32);
        } else
        {
            printf("%c", word[i] + 32);
        }
    }
    printf("\n");

    return 0;
}