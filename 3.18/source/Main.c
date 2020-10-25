#include<stdio.h>
#include<stdlib.h>


int main()
{
	
	float ea;
	printf("Enter sales dollars (-1 to end) :");
	scanf_s("%f", &ea);
	if (ea == -1)
	{
		system("pause");
		return 0;
	}
	printf("Salary is¡G %f\n",ea*9/100+200 );
		
		system("pause");
	return 0;
}

