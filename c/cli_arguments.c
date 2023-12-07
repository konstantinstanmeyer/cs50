#include <stdio.h>

/* argc is the length of the arguments */
int main(int argc, char *argv[])
{
    /* the first element of argv is the execution command, usually "./file_name" (at index 0) */
    if (argc == 2)
    {
        printf("Hello %s\n", argv[1]);
        return 0;
    }
    else 
    {
        printf("Try again\n");
        return 1;
    }

    return 0;
}