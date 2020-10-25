#include<stdio.h>
#include<stdlib.h>


int main()
{
	int ac;
	float st,ch,cr,crl;
	printf("Enter account number(-1 to end) :");
	scanf_s("%d", &ac);
	if (ac == -1)
	{
		system("pause");
		return 0;
	}
	printf("Enter beginning balance¡G");
	scanf_s("%f", &st);
	printf("Enterto total charge¡G");
	scanf_s("%f", &ch);
	printf("Enterto total credits¡G");
	scanf_s("%f", &cr);
	printf("Enterto credit limit¡G");
	scanf_s("%f", &crl);

	if ((st + ch - cr) > crl)
	{
		printf("Account¡G¡@%d\n", ac);
		printf("Credit limit¡G %f\n",crl);
		printf("Balance¡G %f\n",st+ch-cr);
		printf("Credit Limit Exceeded.\n");
	}
	system("pause");
	return 0;
}

