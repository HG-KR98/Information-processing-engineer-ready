#include <stdio.h>

int main() {
	char c = 'A';
	int ascii_value = (int)c;

	printf("Character: %c\n", c);
	printf("ASCII Value: %d\n", ascii_value);

	int ascii_value2 = 65;
	char c = (char)ascii_value2;
	
	printf("ASCII Value: %d\n", ascii_value2);
	printf("Character: %c\n", c);


	char digit = '5';
	int number = digit - '0';

	printf("Digit character: %c\n", digit);
	printf("Integer value: %d\n", number);

	int number2 = 7;
	char digit = (char)(number2 + '0');

	printf("Integer value: %d\n", number2);
	printf("Digit character: %c\n", digit);

	char* p = "KOREA";
	// KOREA
	printf("%s\n", p);
	// OREA
	printf("%s\n", p+1);
	// K
	printf("%c\n", *p);
	// E
	printf("%c\n", *(p+3));
	// O
	printf("%c\n", *p+4);

	// "0" + 3 = "3"
	// a + 3 = d

	return 0;
}