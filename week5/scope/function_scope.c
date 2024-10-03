/*
 * Program demonstrating the use of function scope.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/25/2024
 */

#include <stdio.h>

int main() {
   goto label3;

   label1: 
        printf("label1\n");
        goto label3;
 
   label2: 
        printf("label1\n");

   label3: 
        printf("label3\n");
        goto label1;
}

void scope()
{
    //goto label3;
}

