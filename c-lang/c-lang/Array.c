#include <stdio.h>

// 정수 배열
int intArray[] = { 1, 2, 3, 4, 5 };
int intArray[5] = { 1, 2, 3, 4, 5 };

// 문자 배열
char charArray[] = { 'a', 'b', 'c', 'd', 'e' };
char charArray[5] = { 'a', 'b', 'c', 'd', 'e' };

// 실수 배열
float floatArray[] = {1.2, 3.4, 5.6, 7.8, 9.0};
float floatArray[9] = { 1.2, 3.4, 5.6, 7.8, 9.0, 1.2, 3.4, 5.6, 7.8 };

// 문자열 배열
char* stringArray[] = { "apple", "banana", "cherry", "date", "elderberry" };
char stringArray[][20] = { "apple", "banana", "cherry", "date", "elderberry" };

// 배열을 선언할 때는 직접 크기를 넣을 수도 있고, 안 넣을 수도 있다.
// 시험에서는 배열의 요소에 접근하는 것으로 많이 나온다.
// 개별 요소는 변수[몇번째]로 접근한다.
// 인덱스는 0부터 시작!