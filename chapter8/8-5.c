#include <stdio.h>
#include <string.h>                                // ���ڿ� ���� �Լ� ������ ��� ���� ��� ����

int main(void)
{
	char str1[80] = "dog";
	char str2[80];

	strcpy(str1, "wolf");                          // str1 �迭�� "wolf" ����
	strcpy(str2, str1);                            // str2 �迭�� str1 �迭�� ���ڿ� ����
	printf("%s, %s\n", str1, str2);

	return 0;
}