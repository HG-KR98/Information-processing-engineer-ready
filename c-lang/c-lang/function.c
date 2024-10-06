#include <stdio.h>

// 함수 정의 (선언 부분)
int add(int a, int b) {
	return a + b;
}

void printString(char *str) {
	printf("입력된 문자열: %s\n", str);
}

void printString2(char str[]) {
	printf("입력된 문자열: %s\n", str);
}

void processValues(int *num, char *ch) {
	printf("입력된 숫자: %d\n", *num);
	printf("입력된 문자: %c\n", *ch);
}

double avgArray(int *arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return (double)sum / size;
}


int	main() {
	int result = add(3, 4) // 함수 호출 부분
	printf("3 + 4 = %d\n", result);
	
	char myString[] = "this is string";
	printString(myString);

	char myString2[] = "this is string2";
	printString2(myString2);

	int number = 42;
	char character = 'A';
	processValues(&number, &character);
	
	int myArray[] = { 100, 22, 34, 55, 70 };
	int size = sizeof(myArray) / sizeof(myArray[0]);
	printf("배열의 평균값은 %.2f입니다.\n", avgArray(myArray, size));

	return 0;
}