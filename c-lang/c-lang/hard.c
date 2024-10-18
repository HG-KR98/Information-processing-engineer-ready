#include <stdio.h>

int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };

	int *parr[2];
	parr[0] = arr[1];
	parr[1] = arr[2];

	int result = parr[1][1] + *(parr[1] + 2) + **parr;
    # **parr은 *parr[0]과 같음(다시 한 번 강조. 선언할 때 별과 사용할 떄 별은 다르다)
	printf("%d\n", result);

	return 0;
}