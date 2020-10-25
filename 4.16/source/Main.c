#include<stdio.h>
#include<stdlib.h>


int main()
{
	char sign = '*';
	char sign2 = ' ';
	int temp=0;
	printf("(A)\n");
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if((i>=0)&&(j>temp)&&(j<10))
			{
				printf("%c", sign2);
			}
			else
			{
				printf("%c", sign);
			}			
		}
		printf("\n");
		temp++;
	}


	temp = 10;
	printf("(B)\n");
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if ((i >= 0) && (j < temp) && (j >= 0))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
		temp--;
	}

	temp = 0;
	printf("(C)\n");
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if ((i <= 9) && (j < temp))
			{
				printf("%c", sign2);
			}
			else
			{
				printf("%c", sign);
			}
		}
		printf("\n");
		temp++;
	}


	temp = 9;
	printf("(D)\n");
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if ((i <= 9) && (j < temp) && (j >= 0))
			{
				printf("%c", sign2);
			}
			else
			{
				printf("%c", sign);
			}
		}
		printf("\n");
		temp--;
	}


	system("pause");
	return 0;
}

