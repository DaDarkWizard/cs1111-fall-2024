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

    int charRead;

    if (fseek(myFile, 2, SEEK_CUR) < 0)
    {
        printf("Failed to seek!");
        cleanup(&cleanupValues);
        return -1;
    }

    // Read a character from the file.
    if ((charRead = fgetc(myFile)) < 0)
    {

        printf("There was nothing to read!\n");
        cleanup(&cleanupValues);
        return -1;
    }

    // Print our string.
    printf("%c\n", charRead);

    // Close the file.
    cleanup(&cleanupValues);
}
