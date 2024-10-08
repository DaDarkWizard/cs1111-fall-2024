#include <stdio.h>

void printArray(char a[3][3]);

int main()
{
    char myArray[3][3] = { {' ', ' ', ' '},
                          {' ', ' ', ' '},
                          {' ', ' ', ' '} };
    

    printf("Tic-Tac-Toe!\nYour move first:");
    
    int move;

    scanf("%d", &move);

    printArray(myArray);
}

int checkColumn(char a[3][3], int column)
{
    int isValid = 1;
    char winChar = 0;

    winChar = a[0][column];

    if(winChar == ' ')
    {
        return 0;
    }
    else
    {
        for(int i = 1; i < 3; i++)
        {
            if(a[i][column] != winChar)
            {
                return 0;
            }
        }

        return 1;
    }
}

int checkRow(char a[3][3], int row)
{
    int isValid = 1;
    char winChar = 0;

    winChar = a[row][0];

    if(winChar == ' ')
    {
        return 0;
    }
    else
    {
        for(int i = 1; i < 3; i++)
        {
            if(a[row][i] != winChar)
            {
                return 0;
            }
        }

        return 1;
    }
}

int validWin(char a[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        if(checkColumn(a, i))
        {
            return 1;
        }
        else if(checkRow(a, i))
        {
            return 1;
        }
    }

    int winChar = a[1][1];
    if(winChar == ' ')
    {
        return 0;
    }

    int valid = 1;

    for(int i = 0; i < 3; i++)
    {
        if(a[i][i] != winChar)
        {
            valid = 0;
        }

        // X _ _ 0, 0
        // _ X _ 1, 1
        // _ _ X 2, 2

        // _ _ X 0, 2
        // _ X _ 1, 1
        // X _ _ 2, 0
    }

    if ( valid )
    {
        return 1;
    }

    valid = 1;
    
    for (int i = 0; i < 3; i++)
    {
        if(a[i][2 - i] != winChar)
        {
            valid = 0;
        }

    }

    return valid;
}


/*
 * Prints out an array of characters
 * as a tic-tac-toe board.
 */
void printArray(char a[3][3])
{
    printf("+-----+\n");
    for(int i = 0; i < 3; i++)
    {
        printf("|");
        for(int j = 0; j < 2; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("%c|", a[i][2]);
        printf("\n");
    }
    printf("+-----+\n");
}
