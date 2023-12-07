#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Before: \n");

    char word[20];

    scanf("%s", word);

    /* 
    compared to the original version, we are avoiding the running of strlen(...) on each iteration by initialing the constraint as a variable instead of a function's return value
    and we are using the ctype library to check for casing on chars, and then converting their cases
    */
    for(int i = 0, n = strlen(word); i < n; i++)
    {
        if (islower(word[i]))
        {
            printf("%c", toupper(word[i]));
        } else
        {
            printf("%c", tolower(word[i]));
        }
    }
    printf("\n");

    return 0;
}