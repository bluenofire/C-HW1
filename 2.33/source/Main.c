#include <stdio.h>
#include <stdlib.h>

int main()
{
	int km1, mo1, km2, mo2, mo3, mo4 = 0;
	printf("一整天的總里程數:");
	scanf_s("%d", &km1);
	printf("汽油一公升/加侖多少錢:");
	scanf_s("%d", &mo1);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf_s("%d", &km2);
	printf("一天的停車費:");
	scanf_s("%d", &mo2);
	printf("一天的通行費(過路費):");
	scanf_s("%d", &mo3);
	
	mo4 = (km1 / km2) * mo1 + mo2 + mo3;
	
	printf("一天下來開車去工作的花費=%d\n", mo4);
	
	system("PAUSE");
	return 0;
}