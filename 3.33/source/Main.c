#include<stdio.h>
#include<stdlib.h>


int main()
{
	char sign = '*';
	char sign2 = ' ';
	int l, b;
	scanf_s("%d", &l);
	scanf_s("%d", &b);
	for (int i=0;i < l;i++)
	{
		for (int j=0;j < b;j++)
		{
			if ((i == 0) || (i == l-1) || (j == 0) || (j == b-1))
			{
				printf("%c",sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

