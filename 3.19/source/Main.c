#include<stdio.h>
#include<stdlib.h>


int main()
{
	float pr, ir, da;
	printf("Enter loan principal(-1 to end) :");
	scanf_s("%f", &pr);
	if (pr == -1)
	{
		system("pause");
		return 0;
	}
	printf("Enter interest rate¡G");
	scanf_s("%f", &ir);
	printf("Enterto term of the loan in days¡G");
	scanf_s("%f", &da);
	printf("The interest charge is¡G %f\n", pr*ir*da / 365);

	system("pause");
	return 0;
}

