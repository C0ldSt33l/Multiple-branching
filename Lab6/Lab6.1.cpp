#include<iostream>

//6.���� ���������� ���� � ������ ����. ������� �������� ��� ������, ���� ������ ������ ��� �����������.

int main()
{
	system("chcp 1251");

	int n;

	printf("���������� ���� � ������ ����:"); scanf_s("%d", &n);

	n %= 7;

	switch (n)
	{
	case 1: printf("�����������"); break;
	case 2: printf("�������"); break;
	case 3: printf("�����"); break;
	case 4: printf("�������"); break;
	case 5: printf("�������"); break;
	case 6: printf("�������"); break;
	case 7: printf("�����������"); break;
	default: printf("�������� ����");
	}

	return 0;
}