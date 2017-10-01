#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;

	printf("Enter a integer,I will tell is it even or odd:");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}

	system("pause");
	return 0;
}