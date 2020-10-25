#include<stdio.h>
#include<stdlib.h>


int main()
{
	float h, hr;
	printf("Enter # of hours worked (-1 to end) :");
	scanf_s("%f", &h);
	if (h == -1)
	{
		system("pause");
		return 0;
	}
	printf("Enter hourly rate of the worker ($00.00)¡G");
	scanf_s("%f", &hr);
	if (h > 40)
	{
		printf("Salary is¡G %f\n", h*hr+0.5*hr);
	}
	else
	{
		printf("Salary is¡G %f\n", h*hr);
	}
	

	system("pause");
	return 0;
}

