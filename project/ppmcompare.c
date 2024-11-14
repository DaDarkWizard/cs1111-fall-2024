/*
 * Program that checks whether 2 ppm files contain the same information.
 *
 * @author Dasker
 * @email dtmasker@mtu.edu
 * 
 * @date 11/13/2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Free variables and close files.
void cleanup(FILE *ppm1, FILE *ppm2, char *buffer)
{
    fclose(ppm1);
    fclose(ppm2);
    free(buffer);
}

// Get the next number in a file.
int getNextInt(FILE *ppm, char *buffer)
{
    while (1)
    {
        // Try to read the number.
        if (fscanf(ppm, "%32s", buffer) < 1)
        {
            return -1;
        }

        // If it's a comment, gobble up the line.
        if (buffer[0] == '#')
        {
             while (1)
             {
                 if (fgets(buffer, 1024, ppm) == NULL)
                 {
                     return -1;
                 }
                 if (buffer[strlen(buffer) - 1] == '\n' ||
                         buffer[strlen(buffer) - 1] == '\r')
                 {
                     break;
                 }
             }
             continue;
        }

        // Return the number.
        return atoi(buffer);
    }
}

int main(int argc, const char **argv)
{
    // Check whether the correct number of arguments is used.
    if (argc < 3)
    {
        printf("Usage: ./ppmdiff <file1> <file2>\n");
        return 1;
    }

    // Create variables to have our files.
    FILE *ppm1, *ppm2;
    char *buffer = malloc(1024);
    if (buffer == NULL)
    {
        printf("Failed to allocate buffer.\n");
        return 1;
    }

    // Try to open our files.
    if ((ppm1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Failed to open first file %s\n", argv[1]);
        free(buffer);
        return 1;
    }

    if ((ppm2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Failed to open second file %s\n", argv[2]);
        fclose(ppm1);
        free(buffer);
        return 1;
    }

    // Check for the 'magic number'
    if ((fgetc(ppm1) != 'P') || (fgetc(ppm1) != '3') ||
            (fgetc(ppm2) != 'P') || fgetc(ppm2) != '3' )
    {
        printf("One of the files isn't in PPM P3 format!\n");
        cleanup(ppm1, ppm2, buffer);
        return 1;
    }

    // Declare some useful variables.
    int tmp, rows, cols, maximum;

    // Get rows, columns, and maximum.
    if ((tmp = getNextInt(ppm1, buffer)) < 0 ||
            (rows = getNextInt(ppm2, buffer)) < 0 ||
            tmp != rows)
    {
        printf("Invalid rows: %d %d!\n", rows, tmp);
        cleanup(ppm1, ppm2, buffer);
        return 1;
    }
    
    if ((tmp = getNextInt(ppm1, buffer)) < 0 ||
            (cols = getNextInt(ppm2, buffer)) < 0 ||
            tmp != cols)
    {
        printf("Invalid cols!\n");
        cleanup(ppm1, ppm2, buffer);
        return 1;
    }

    if ((tmp = getNextInt(ppm1, buffer)) < 0 ||
            (maximum = getNextInt(ppm2, buffer)) < 0 ||
            tmp != maximum)
    {
        printf("Invalid maximum!\n");
        cleanup(ppm1, ppm2, buffer);
        return 1;
    }

    // Compare each pixel.
    for ( int i = 0; i < rows * cols * 3; i++ )
    {
        if ((tmp = getNextInt(ppm1, buffer)) < 0 ||
                (maximum = getNextInt(ppm2, buffer)) < 0 ||
                tmp != maximum)
        {
            printf("Difference at pixel %d\n", (i / 3) + 1);
            cleanup(ppm1, ppm2, buffer);
            return -1;
        }
    }

    cleanup(ppm1, ppm2, buffer);

    return 0;
}
