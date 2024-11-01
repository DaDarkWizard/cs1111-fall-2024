#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *buffer = malloc(1024);

    int nameCount;
    scanf("%d\n", &nameCount);

    char **nameList = malloc(sizeof(char*) * nameCount);
    if(!nameList)
    {
        printf("Failed to allocate!\n");
        return -1;
    }

    // Read in each name
    for(int i = 0; i < nameCount; i++)
    {
        fgets(buffer, 1024, stdin);
        buffer[strnlen(buffer, 1024) - 1] = 0;
        nameList[i] = malloc(strnlen(buffer, 1024) + 1);

        if(!nameList[i])
        {
            printf("Failed to allocate!\n");
            return -1;
        }

        strncpy(nameList[i], buffer, strnlen(buffer, 1024) + 1);
    }

    for(int i = 0; i < nameCount; i++)
    {
        printf("%s\n", nameList[i]);
    }
}
