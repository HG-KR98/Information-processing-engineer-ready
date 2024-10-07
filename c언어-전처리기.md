## 전처리기

\#include <stdio.h>라는 것을 C언어에서 제일 먼저 볼 수 있는데 이는 C언어에서 제공하는 기본 함수들을 사용할 수 있도록 외부에서 기능을 불러온다고 생각하면 된다.

```c
#include <stdio.h>

#define PI 3.14159

int main() {
    double radius1 = 5.0;
    double radius2 = 10.0;

    // 원의 둘레 계산
    double circumference1 = 2 * PI * radius1;
    double circumference2 = 2 * PI * radius2;

    // 원의 면적 계산
    double area1 = PI * radius1 * radius1;
    double area2 = PI * radius2 * radius2;

    // 구의 부피 계산
    double volume1 = (4.0 / 3.0) * PI * radius1 * radius1 * radius1;
    double volume2 = (4.0 / 3.0) * PI * radius2 * radius2 * radius2;

    // 결과 출력
    printf("Radius 1: %.2f\n", radius1);
    printf("Circumference 1: %.2f\n", circumference1);
    printf("Area 1: %.2f\n", area1);
    printf("Volume 1: %.2f\n", volume1);

    printf("\n");

    printf("Radius 2: %.2f\n", radius2);
    printf("Circumference 2: %.2f\n", circumference2);
    printf("Area 2: %.2f\n", area2);
    printf("Volume 2: %.2f\n", volume2);

    return 0;
}

#include <stdio.h>

#define 인사말 "안녕하세요!"
#define 이름 "홍길동"
#define 좋아하는_명언 "하루하루가 마지막인 것처럼 살아라."

int main() {
    printf("%s\n", 인사말);
    printf("제 이름은 %s입니다.\n", 이름);
    printf("제가 좋아하는 명언은: \"%s\"\n", 좋아하는_명언);

    return 0;
}
```

위의 예시처럼 define을 사용하고 싶을 경우 #define을 통해서 사용하면 된다.