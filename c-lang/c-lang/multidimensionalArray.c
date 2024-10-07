#include <stdio.h>

int main() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}
	

	int arr1[5] = { 1,2,3,4,5 };
	float arr2[4] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	char arr3[6] = { "H", "e", "l", "l", "o", "\0" };
	char str[6] = "Hello";

	printf("arr1[0] = %d\n", arr1[0]);
	printf("arr2[0] = %.1f\n", arr2[0]);
	printf("arr3[0] = %c\n", arr3[0]);
	printf("arr4[0] = %c\n", str[0]);

	const char* arr[2][2] = { {"Hello", "World"}, {"Foo", "Bar"} };

	printf("%c\n", arr[0][0][0]);
	printf("%c\n", arr[0][1][0]);
	printf("%c\n", arr[1][0][0]);
	printf("%c\n", arr[1][1][0]);

	return 0;
}