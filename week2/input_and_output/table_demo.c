#include <stdio.h>

int main() {

    printf("%10s %5s %5s %20s\n", "Name", "Rate", "Hours", "Payment");
	printf("%-10s %5.2f %5d %20.2f\n", "Alice Hill", 9.45, 5, 47.25);
	printf("%-10s %5.2f %5d %20.2f\n", "John Doe", 9.45, 5, 47.25);
	printf("%-10s %5.2f %5d %20.2f\n", "Richie Won", 9.45, 5, 12347.25);
}

