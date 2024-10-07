#include <stdio.h>

int main() {
	int i;

	for (i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			continue;
		}

		printf("i = %d\n", i);
	}

	int j;

	for (j = 10; j >= 0; j--) {
		if (j * j == 9) {
			continue;
		}
		printf("j = %d\n", j);
	}


	int k = 0;

	while (k < 10) {
		k++;
		if (k % 2 != 0) {
			continue;
		}

		printf("k = %d\n", k);
	}

	return 0;

}