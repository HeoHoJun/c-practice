#include <stdio.h>
#include <string.h>                                    // ���ڿ��� �ٷ� �� �ִ� string.h ��� ���� ����

int main(void)
{
	char fruit[7] = "banana";                          // banana�� �ʱ�ȭ

	printf("%s\n", fruit);                             // banana ���
	strcpy(fruit, "tomato");                           // fruit�� tomato ����
	printf("%s\n", fruit);                             // tomato ���

	return 0;
}