#include <stdio.h>

int main(void)
{
	char fruit[7] = "banana";                                 // char 배열 선언과 문자열 초기화
	// fruit = "banana";                                      // 배열은 선언된 이후에 대입 연산자로 문자열을 입력할 수 없다.
	printf("바나나 : %s\n", fruit);                           // 배열명으로 저장된 문자열 출력
	printf("바나나주스 : %s %s\n", fruit, "juice");           // 문자열 상수를 직접 %s로 출력
}