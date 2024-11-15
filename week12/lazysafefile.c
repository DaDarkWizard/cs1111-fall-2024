#include <stdio.h>
#include <stdlib.h>

typedef struct Cleanup_t Cleanup;

struct Cleanup_t {
    FILE *file1;
    void *buffer1;
};

// Free all used memory.
void cleanup(Cleanup *cleanup)
{
    if (cleanup->file1 != NULL)
    {
        fclose(cleanup->file1);
    }
    if (cleanup->buffer1 != NULL)
    {
        free(cleanup->buffer1);
    }
}

int main()
{
    Cleanup cleanupValues;
    cleanupValues.file1 = NULL;
    cleanupValues.buffer1 = NULL;

    // Try to open file.
    FILE *myFile;
    myFile = fopen("test.txt", "r");
    cleanupValues.file1 = myFile;

    // Test whether file was opened.
    if (myFile == NULL)
    {
        printf("Failed to open file!\n");
        return -1;
    }

    // Allocate space for reading into.
    char *buffer = malloc(1024);
    cleanupValues.buffer1 = buffer;
    if(buffer == NULL)
    {
        printf("Failed to allocate buffer!\n");
        cleanup(&cleanupValues);
        return -1;
    }

    // Read a string from the file.
    if (fscanf(myFile, "%1024s", buffer) < 1)
    {
        printf("There was nothing to read!\n");
        cleanup(&cleanupValues);
        return -1;
    }

    // Print our string.
    printf("%s\n", buffer);

    // Close the file.
    cleanup(&cleanupValues);
}
