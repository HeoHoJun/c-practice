#include <stdio.h>
#include <string.h>                                // 문자열 관련 함수 원형을 모아 놓은 헤더 파일

int main(void)
{
	char str1[80] = "dog";
	char str2[80];

	strcpy(str1, "wolf");                          // str1 배열에 "wolf" 복사
	strcpy(str2, str1);                            // str2 배열에 str1 배열의 문자열 복사
	printf("%s, %s\n", str1, str2);

	return 0;
}