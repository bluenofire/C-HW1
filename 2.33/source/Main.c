#include <stdio.h>
#include <stdlib.h>

int main()
{
	int km1, mo1, km2, mo2, mo3, mo4 = 0;
	printf("�@��Ѫ��`���{��:");
	scanf_s("%d", &km1);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf_s("%d", &mo1);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf_s("%d", &km2);
	printf("�@�Ѫ������O:");
	scanf_s("%d", &mo2);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf_s("%d", &mo3);
	
	mo4 = (km1 / km2) * mo1 + mo2 + mo3;
	
	printf("�@�ѤU�Ӷ}���h�u�@����O=%d\n", mo4);
	
	system("PAUSE");
	return 0;
}