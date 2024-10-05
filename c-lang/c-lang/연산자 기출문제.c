#include<stdio.h>

int main() {
	int a = 10;
	int b = 3;

	int division_result = a / b;
	int remainer_result = a % b;

	// printf("a/b = %d\n".division_result);
	printf("a%%b = %d\n", remainer_result);

	int c = 5;

	a = a + 3;

	printf("a = %d\n", a);

	int d = 1;

	switch (d)
	{
	case 1:
		printf("1입니다\n");
		break;
	case 2:
		printf("2입니다.\n");

	default:
		printf("기본 값입니다\n");
		break;
	}


	return 0;
}