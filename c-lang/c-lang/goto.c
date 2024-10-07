#include <stdio.h>

int main() {
	
	printf("첫 번째 출력문입니다.\n");
	printf("두 번째 출력문입니다.\n");

	goto third; // third 레이블로 이동

	printf("이 문장은 보이지 않을 것입니다.\n");

third:
	printf("세 번째 출력문입니다.\n");
	printf("네 번째 출력문입니다.\n");
	printf("다섯 번째 출력문입니다.\n");


	int i;

	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			goto target;
		}
		else {
			printf("%d", i);
		}
		printf("i = %d\n", i);
	}

target:
	printf("타깃 레이블로 이동\n");
	printf("i = %d\n", i);


	int j, k;

	for (j = 0; j < 5; j++) {
		for (k = 0; k < 5; k++) {
			if (j*k == 3) {
				goto end;
			}
			printf("j = %d,k = %d\n", j, k);
		}
	}

end:
	printf("반복문을 빠져 나갑니다.\n");


	return 0;
}