#include <stdio.h>

int main(void)
{
	char fruit[7] = "banana";                                 // char �迭 ����� ���ڿ� �ʱ�ȭ
	// fruit = "banana";                                      // �迭�� ����� ���Ŀ� ���� �����ڷ� ���ڿ��� �Է��� �� ����.
	printf("�ٳ��� : %s\n", fruit);                           // �迭������ ����� ���ڿ� ���
	printf("�ٳ����ֽ� : %s %s\n", fruit, "juice");           // ���ڿ� ����� ���� %s�� ���
}