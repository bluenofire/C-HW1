#include <stdio.h>
#include <conio.h>

int main(void) {


	int num1;
	int num2;

	printf("Enter a number:\n");
	scanf_s("%d%d", &num1 ,&num2);

	if (num1 % num2 == 0)
		printf("num1是num2的倍數");
	else
		printf("num1不是num2的倍數");

	_getch();
	return 0;


}