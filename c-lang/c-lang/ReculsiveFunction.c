#include <stdio.h>

int nSum(int n) {
	if (n == 0) {
		return 0;
	}

	int res = n + nSum(n - 1);
	return res;
}

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int maxVal(int *arr, int size) {
	if (size == 1) {
		return arr[0];
	}
	else {
		int max = maxVal(arr, size - 1);
		return (arr[size - 1] > max) ? arr[size - 1] : max;
	}

}

int main() {
	int a = 5;
	// 5+4+3+2+1
	int sum = nSum(a);
	printf("입력값: %d 함수 결과 값: %d", a, sum);
	
	int number = 5;
	printf("%d! = %d\n", number, factorial(number));


	int myArray[] = { 1, 5, 3, 9, 2 };
	int size = sizeof(myArray) / sizeof(myArray[0]);
	printf("배열의 최대값은 %d입니다.\n", maxVal(myArray, size));
	return 0;
}