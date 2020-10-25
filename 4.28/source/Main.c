#include<stdio.h>
#include<stdlib.h>


int main()
{
	int p;
	float h, hr,ea;
	
	printf("你的身分代碼:");
	scanf_s("%d", &p);
	if (p == 1)
	{
		printf("Enter # of hours worked :");
		scanf_s("%f", &h);
		printf("Enter hourly rate of the worker ($00.00)：");
		scanf_s("%f", &hr);
		printf("Salary is： %f\n", h*hr);
	}
	else if (p == 2)
	{
		printf("Enter # of hours worked :");
		scanf_s("%f", &h);
		printf("Enter hourly rate of the worker ($00.00)：");
		scanf_s("%f", &hr);
		if (h > 40)
		{
			printf("Salary is： %f\n", hr*40 + 1.5*(40-h)*hr);
		}
		else
		{
			printf("Salary is： %f\n", h*hr);
		}
	}
	else if (p == 3)
	{
		printf("Enter sales dollars :");
		scanf_s("%f", &ea);
		printf("Salary is： %f\n", ea * 5.7 / 100 + 250);
	}
	else if (p == 4)
	{
		printf("完成多少款項 :");
		scanf_s("%f", &ea);
		printf("一個款項多少 :");
		scanf_s("%f", &h);
		printf("Salary is： %f\n", ea*h);
	}


	


	system("pause");
	return 0;
}

