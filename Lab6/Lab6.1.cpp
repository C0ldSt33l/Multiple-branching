#include<iostream>

//6.Дано количество дней с начало года. Вывести название дня недели, если первое января был понедельник.

int main()
{
	system("chcp 1251");

	int n;

	printf("Количество дней с начало года:"); scanf_s("%d", &n);

	n %= 7;

	switch (n)
	{
	case 1: printf("Понедельник"); break;
	case 2: printf("Вторник"); break;
	case 3: printf("Среда"); break;
	case 4: printf("Четверг"); break;
	case 5: printf("Пятница"); break;
	case 6: printf("Суббота"); break;
	case 7: printf("Воскресенье"); break;
	default: printf("Неверный ввод");
	}

	return 0;
}