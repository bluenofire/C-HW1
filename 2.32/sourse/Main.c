#include <stdio.h>
#include <stdlib.h>

int main()
{
	float height, m, weight, BMI;
	printf("======BMI======\n");
	printf("Height(cm):");
	scanf_s("%f", &height);
	printf("Weight(kg):");
	scanf_s("%f", &weight);
	printf("===============\n");

	m = height / 100;
	BMI = weight / (m*m);
	printf("BMI = %.1f\n\n", BMI);

	if (BMI < 18.5)
		printf("�L��\n\n");

	if (BMI >= 18.5 && BMI < 24.9)
		printf("���`\n\n");

	if (BMI >= 25 && BMI < 29.9)
		printf("�L��\n\n");

	if (BMI >= 30)
		printf("�έD\n\n");


	system("PAUSE");
	return 0;
}