#include <stdio.h>
#include <conio.h>

int main(void) {


	int number;

	printf("Enter a number:\n");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("The number is even");
	else
		printf("The number is odd");

	_getch();
	return 0;


}