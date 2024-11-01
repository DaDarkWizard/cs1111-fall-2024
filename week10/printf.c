#include <stdio.h>

int main(int argc, char **argv)
{
    if( argc < 2 )
    {
        printf("Usage: printf <string to print>\n");
        return -1;
    }

    printf("%s", argv[1]);

    return 0;
}
