#include <stdio.h>
#include <string.h>

int main() {
	int n = 42;
	int* p = &n;
	
	printf("%d\n", n);
	printf("%d\n", &n);
	printf("%d\n", p);
	printf("%d\n", *p);
	
	// 다음 주소로 넘어가는 방법
	char* s = "Hello, World!";
	printf("%c", *s);
	printf("%c", *(s+1));
	printf("%c", *(s+2));
	printf("%c", *(s+3));
	return 0;

	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("배열의 요소:");
	for (int i = 0; i < size; i++) {	
		printf("%d", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;

	char str1[5] = { 'H', 'e', 'l', 'l', 'o'};
	char str2[] = "Hello";
	printf("str1의 길이: %lu\n", sizeof(str1));
	printf("str2의 길이: %lu\n", sizeof(str2));

	printf("str1의 내용: ");
	for (int i = 0; i < sizeof(str1); i++) {
		printf("%c", str1[i]);
	}
	printf("\n");

	printf("str2의 내용: %s\n", str2);

	return 0;

	// 실행할 때마다 메모리 값이 다르다.
	// 온라인의 경우: 서버에서 메모리 할당
	// 로컬의 경우: 운영체제가 메모리에 할당
	int n = 50;
	printf("%s%d\n", "value:", n);
	printf("%s%d\n", "address:", &n);
}