#include <stdio.h>
#include <string.h>

/*unsigned long strlen(char *string)
{
    int i = 0;
    for(i = 0; string[i] != 0; i++)
    {
        
    }
    return i;
}*/

int main(int argc, const char **argv)
{
    printf("args length: %d\n", argc);
    printf("First arg: %s\n", argv[0]);
    printf("Second arg: %s\n", argv[1]);

    char *mystring = "hello";
    char password[5] = {'p', 'a', 's', 's', 0};
    char mystring2[6] = {'h', 'e', 'l', 'l', 'o', 0};
    

    printf("%s %.6s\n", mystring, mystring2);
    printf("Character after mystring2: %c\n", mystring2[5]);
    printf("string length: %d\n", strnlen(mystring, 10));
    printf("string compare: %d\n", strncmp(mystring, password, 10));
    printf("%d\n", 'h' - 'p');

    char buffer[1024];

    int bufferlen = scanf("%s", buffer);
    bufferlen = strnlen(buffer, 1024);

    printf("%d\n", bufferlen);
    printf("%.1024s\n", buffer);

    return -1;
}
