#include<stdio.h>
#include<stdlib.h>


int main()
{
	char sign = '*';
	char sign2 = ' ';
	int temp = 4;
	int temp2 = 4;
	int i;
	int j;
	
	for (i = 0;i < 9;i++)
	{
		for (j = 0;j < 9;j++)
		{
			if ((i >= 0) && (j >= temp)&& (j <= temp2) )
			{
				printf("%c", sign);
			}
			else if ((i==4) || (j==4))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
				
		}
		printf("\n");
		
		if ((i >= 4) && (j >= 4))
		{
			temp++;
			temp2--;
		}
		else
		{
			temp--;
			temp2++;
		}
		
	}


	


	system("pause");
	return 0;
}

