#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter 3 intergers, and I will tell you\n");
	printf("the relationships they satisfy: ");

	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 == num2)
	{
		if (num1 < num3)
		{
			printf("Max%d\n", num3);
			printf("min%d\n", num1);
		}
	}

	if (num1 == num2)
	{
		if (num1 > num3)
		{
			printf("Max%d\n", num1);
			printf("min%d\n", num3);
		}
	}

	
	if (num1 < num2)
	{
		if (num2 < num3)
		{
			printf("Max%d\n", num3);
			printf("min%d\n", num1);
		}
	}

	if (num1 > num2)
	{
		if (num1 < num3)
		{
			printf("Max%d\n", num3);
			printf("min%d\n", num2);
		}
	}

	if (num1 > num2)
	{
		if (num2 > num3)
		{
			printf("Max%d\n", num1);
			printf("min%d\n", num3);
		}
	}

	if (num1 > num3)
	{
		if (num3 > num2)
		{
			printf("Max%d\n", num1);
			printf("min%d\n", num2 );
		}
	}

	if (num1 < num3)
	{
		if (num3 < num2)
		{
			printf("Max%d\n", num2);
			printf("min%d\n", num1);
		}
	}

	if (num3 < num1)
	{
		if (num1 < num2)
		{
			printf("Max%d\n", num2);
			printf("min%d\n", num3);
		}
	}
	
	if (num1 == num3)
	{
		if (num2 < num3)
		{
			printf("Max%d\n", num3);
			printf("min%d\n", num2);
		}
	}

	if (num1 == num3)
	{
		if (num2 > num3)
		{
			printf("Max%d\n", num2);
			printf("min%d\n", num3);
		}
	}

	if (num2 == num3)
	{
		if (num1 > num3)
		{
			printf("Max%d\n", num1);
			printf("min%d\n", num3);
		}
	}

	if (num2 == num3)
	{
		if (num1 < num3)
		{
			printf("Max%d\n", num2);
			printf("min%d\n", num1);
		}
	}

	if (num1 == num3)
	{
		if (num2 == num3)
		{
			printf("Max%d\n", num3);
			printf("min%d\n", num2);
		}
	}

	system("pause");
	return 0;
}