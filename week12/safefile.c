#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Try to open file.
    FILE *myFile;
    myFile = fopen("test.txt", "r");

    // Test whether file was opened.
    if (myFile == NULL)
    {
        printf("Failed to open file!\n");
        return -1;
    }

    // Allocate space for reading into.
    char *buffer = malloc(1024);
    if(buffer == NULL)
    {
        printf("Failed to allocate buffer!\n");
        fclose(myFile);
        return -1;
    }

    // Read a string from the file.
    if (fscanf(myFile, "%1024s", buffer) < 1)
    {
        printf("There was nothing to read!\n");
        fclose(myFile);
        free(buffer);
        return -1;
    }

    // Print our string.
    printf("%s\n", buffer);

    // Close the file.
    fclose(myFile);
    free(buffer);
}
