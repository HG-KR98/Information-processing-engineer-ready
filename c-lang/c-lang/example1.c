#include <stdio.h>

int main() {

	char c = 'A';
	char str[] = "Hello, World!";

	printf("Character: %c\n", c);
	printf("String: %s\n", str);

	short s = -1024;
	int i = 65536;
	long l = 123456789L;

	printf("Short integer: %hd\n", s);
	printf("Integer: %d\n", i);
	printf("Long integer: %ld\n", l);

	float f = 3.14f;
	double d = 2.71828;

	printf("Float: %.2f\n", f);
	printf("Double: %.5lf\n", d);

	// short, long 設 照蟹身
	// int, char, float, double, char[] 設 蟹身
}