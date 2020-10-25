#include<stdio.h>
#include<stdlib.h>


int main()
{
	float r=10.0;
	float m=5000.0;
	for (int i = 0;i < 15;i++)
	{
		m = m * (r/100+1);
		r = r + 0.5;
	}
	printf("$ = %f", m);
	system("pause");
	return 0;
}

