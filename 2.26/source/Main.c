#include <stdio.h>
#include <conio.h>

int main(void) {


	int num1;
	int num2;

	printf("Enter a number:\n");
	scanf_s("%d%d", &num1 ,&num2);

	if (num1 % num2 == 0)
		printf("num1�Onum2������");
	else
		printf("num1���Onum2������");

	_getch();
	return 0;


}