#include <stdio.h>

struct Car {
	char model[50];
	int year;
	float price;

};

int main() {
	struct Car cars[2];
	int i;
	char modelName1[] = "Mercedes-Benz";
	for (i = 0; modelName1[i] != '\0'; i++) {
		cars[0].model[i] = modelName1[i];
	
	}

	// 첫번째 차 정보
	cars[0].model[i] = '\0'; // 문자열 종료 문자
	cars[0].year = 2020;
	cars[0].price = 50000.75;

	// 두번째 차 정보
	char modelName2[] = "BMW";
	for (i = 0; modelName2[i] != '\0'; i++) {
		cars[1].model[i] = modelName2[i];
	}

	cars[1].model[i] = '\0'; // 문자열 종료 문자
	cars[1].year = 2018;
	cars[1].price = 45000.50;

	// 배열의 각 요소 출력
	for (i = 0; i < 2; i++) {
		printf("Car %d:\n", i + 1);
		printf(" Model: %s\n", cars[i].model);
		printf(" Year: %d\n", cars[i].year);
		printf(" Price: %.2f\n", cars[i].price);
	}

	return 0;
}