#include <stdio.h>
#include <string.h>

// 구조체 정의
struct Bag {
	char brand[50]; // 브랜드명을 저장할 문자열 배열
	int year; // 제작 연도를 저장할 정수형 변수
	float price; // 가격을 저장할 실수형 변수
};

// 구조체 포인터를 인수로 받아서 출력하는 함수의 정의
void printBag(struct Bag *bag) {
	printf("Brand: %s\n", bag -> brand);
	printf("Year: %d\n", bag -> year);
	printf("Price : %.2f\n", bag -> price);
}

int main() {
	struct Bag myBag; // 구조체 변수 선언
	struct Bag* bagPtr = &myBag;
	// 구조체 포인터 선언 및 초기화

	// 포인터를 통해 값 할당
	strcpy(bagPtr -> brand, "Gucci");
	bagPtr->year = 2021;
	bagPtr->price = 1500.50;

	printBag(bagPtr);
	// 구조체 포인터를 사용하여 함수 호출

	return 0;
}