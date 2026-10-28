#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, days, month;
    printf("Введите количество месяцев: ");
    scanf("%d", &n);
    printf("Введите количество дней: ");
    scanf("%d", &days);
    month = (n + (days - 1) / 30) % 12 + 1;
    switch (month) {
    case 1: printf("Январь"); break;
    case 2: printf("Февраль"); break;
    case 3: printf("Март"); break;
    case 4: printf("Апрель"); break;
    case 5: printf("Май"); break;
    case 6: printf("Июнь"); break;
    case 7: printf("Июль"); break;
    case 8: printf("Август"); break;
    case 9: printf("Сентябрь"); break;
    case 10: printf("Октябрь"); break;
    case 11: printf("Ноябрь"); break;
    case 12: printf("Декабрь"); break;
    }
}
