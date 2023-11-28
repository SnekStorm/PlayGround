#include <stdio.h>

// Example:
// argc: Number of inputs + file name
// argv: The inputs
int main(int argc, char *argv[])
{
    printf("argc = %d \n", argc);
    printf("argv[iterator]:\n");
    for (int i = 0; i < argc; i++)
    {
        printf("%d. %s \n", i, argv[i]);
    }
    
    return 0;
}
