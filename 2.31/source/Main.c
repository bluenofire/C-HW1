#include <stdio.h>
#include <conio.h>

int main(void) {

	int x;
	int y;
		printf("number     square     cube\n");
	for (int i = 0; i <= 10; i++)
	{
		x = i * i;
		y = i * x;
		
		printf("%-3d         %-3d         %-3d\n", i, x, y);

	}
	
	return 0;
}