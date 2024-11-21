




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "studentreader.h"

/*
 * Reads a column from a line at start.
 *
 * @param line: The line to read from
 * @param start: The starting point in the line
 *
 * @returns the new string or NULL on failure
 */
char *readCol(char *line, int start)
{
    // Figure out how long the column info is.
    int len = 0;
    for(; line[len + start] != ',' &&
           line[len + start] != '\n' &&
           line[len + start] != '\r' &&
           line[len + start] != '\0' ; len++);
    // Make space for the null character at the end of the string.
    len++;

    // Allocate space to copy the string to.
    char *output = malloc(len * sizeof(char));

    // Make sure the malloc succeeded.
    if (output == NULL)
    {
        return NULL;
    }

    // Copy the string over.
    for(int i = 0; i < len - 1; i++)
    {
        output[i] = line[i + start];
    }
    output[len - 1] = 0;

    return output;
}

/*
 * Read in the file of students to a linked list.
 *
 * @param filePath: The path to the student file.
 *
 * @returns Linked list of students on success, NULL on failure.
 */
Student *readStudentFile(char *filePath)
{
    // Open the student file.
    FILE *studentFile = fopen(filePath, "r");

    if(studentFile == NULL)
    {
        return NULL;
    }

    // Allocate a buffer for reading.
    char *buffer = malloc(1024);
    if(buffer == NULL)
    {
        fclose(studentFile);
        return NULL;
    }

    // Skip the first line of the file.
    char *result = fgets(buffer, 1024, studentFile);
    if(result == NULL)
    {
        fclose(studentFile);
        free(buffer);
        return NULL;
    }


    // Create variables for reading and returning the list.
    Student *head = NULL;
    Student tmpStudent;

    // Read in all lines of the file and process them.
    result = fgets(buffer, 1024, studentFile);
    while(result != NULL)
    {
        // Variable to keep track of where we are in the line.
        int loc = 0;

        // Read each column of the student info one by one.
        tmpStudent.firstName = readCol(buffer, 0);
        if(tmpStudent.firstName == NULL)
        {
            fclose(studentFile);
            free(buffer);
            return head;
        }

        loc += strlen(tmpStudent.firstName) + 1;

        tmpStudent.lastName = readCol(buffer, loc);
        loc += strlen(tmpStudent.lastName) + 1;
        if(tmpStudent.lastName == NULL)
        {
            free(tmpStudent.firstName);
            free(buffer);
            fclose(studentFile);
            return head;
        }

        tmpStudent.email = readCol(buffer, loc);
        loc += strlen(tmpStudent.email) + 1;
        if(tmpStudent.email == NULL)
        {
            free(tmpStudent.lastName);
            free(tmpStudent.firstName);
            free(buffer);
            fclose(studentFile);
            return head;
        }

        tmpStudent.id = readCol(buffer, loc);
        loc += strlen(tmpStudent.id) + 1;
        if(tmpStudent.id == NULL)
        {
            free(tmpStudent.email);
            free(tmpStudent.lastName);
            free(tmpStudent.firstName);
            free(buffer);
            fclose(studentFile);
            return head;
        }

        tmpStudent.major = readCol(buffer, loc);
        loc += strlen(tmpStudent.major) + 1;
        if(tmpStudent.major == NULL)
        {
            free(tmpStudent.id);
            free(tmpStudent.email);
            free(tmpStudent.lastName);
            free(tmpStudent.firstName);
            free(buffer);
            fclose(studentFile);
            return head;
        }

        // Allocate space for our student we finished reading.
        Student *newStudent = malloc(sizeof(Student));
        if(newStudent == NULL)
        {
            free(tmpStudent.major);
            free(tmpStudent.id);
            free(tmpStudent.email);
            free(tmpStudent.lastName);
            free(tmpStudent.firstName);
            free(buffer);
            fclose(studentFile);
            return head;
        }
        
        // Copy the student over into the list.
        *newStudent = tmpStudent;
        newStudent->next = head;
        head = newStudent;

        // Read the next line from the file.
        result = fgets(buffer, 1024, studentFile);
    }

    // Free our used memory.
    free(buffer);
    fclose(studentFile);
    
    // Return our list.
    return head;
}

