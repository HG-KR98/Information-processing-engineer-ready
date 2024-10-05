#include <stdio.h>

int main() {
	
	// 문자열 배열로 할당
	char str1[] = "Hello";

	// 문자열 포인터로 할당
	char* str2 = "Hello";

	// 문자 배열로 할당
	char str3[] = { 'H', 'e', 'l', 'l', 'o', '\0'};

	// 문자열 배열 할당 후 개별 문자 할당
	char str4[6];
	str4[0] = 'H';
	str4[1] = 'e';
	str4[2] = 'l';
	str4[3] = 'l';
	str4[4] = 'o';
	str4[5] = '\0';

	// 문자 단위로 출력
	for (int i = 0; str1[i] != '\0'; i++) {
		printf("%c", str1[i]);

	}
	printf("\n");

	// puts 함수로 출력
	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);

	// 포인터를 사용하여 문자열 출력
	char* ptr = str2;
	while (*ptr != '\0') {
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");

	// printf 함수로 출력
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);


	char charArray[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	printf("%s\n", charArray);
	return 0;

	char* str = "Hello";
	printf("%s\n", str);
	return 0;

}

