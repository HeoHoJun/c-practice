#include <stdio.h>

void fruit(void);                      // �Լ� ����

int main(void)
{
	fruit();                           // �Լ� ȣ��

	return 0;
}

void fruit(void)                       // ���ȣ�� �Լ� ����
{
	printf("banana\n");
	fruit();                           // �ڽ��� �ٽ� ȣ��
}