#include<stdio.h>
#include<stdlib.h>


int main()
{
	int x=1;
	int y = 1;
	int z = 1;
	int a = 1;
	for (int i = 0;i <= 500;i++)
	{
		z = (x*x + y * y) ^ (1 / 2);
		a = z % 1;
		if ((a == 0) && (z<=500))
		{
			printf("©³=%d,°ª=%d,±×Ãä=%d\n", x, y, z);
		}
		x = x + 1;
		y = y + 1;
	}

	system("pause");
	return 0;
}

