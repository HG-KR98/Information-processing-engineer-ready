#include <stdio.h>

int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };

	int *parr[2];
	parr[0] = arr[1];
	parr[1] = arr[2];

	int result = parr[1][1] + *(parr[1] + 2) + **parr;
    # **parr�� *parr[0]�� ����(�ٽ� �� �� ����. ������ �� ���� ����� �� ���� �ٸ���)
	printf("%d\n", result);

	return 0;
}