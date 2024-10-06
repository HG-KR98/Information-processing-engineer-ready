#include <stdio.h>

struct Person {
	char name[50];
	int age;
}; // 뒤에 변수명을 작성하면 main에 따로 변수 선언을 해주지 않아도 됨. 

int main() {
	struct Person person1;
	person1.age = 25;
	snprintf(person1.name, 50, "WeekendCode");

	char name[] = "WeekendCode";
	for (int i = 0; i < sizeof(name); i++) {
		person1.name[i] = name[i];
	}

	printf("Name: %s, Age: %d\n", person1.name, person1.age);
}