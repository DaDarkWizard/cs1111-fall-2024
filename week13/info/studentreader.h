#ifndef STUDENTREADER_H
#define STUDENTREADER_H


// Structure to store student information.
typedef struct Student_t Student;

struct Student_t {
    char *firstName;
    char *lastName;
    char *email;
    char *id;
    char *major;

    Student *next;
};

/*
 * Read in the file of students to a linked list.
 *
 * @param filePath: The path to the student file.
 *
 * @returns Linked list of students on success, NULL on failure.
 */
Student *readStudentFile(char *filePath);

#endif
