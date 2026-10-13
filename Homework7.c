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
    n = (n + (days - 1) / 30) % 12;
    switch (n) {
    case 0: month = 1; break;
    case 1: month = 2; break;
    case 2: month = 3; break;
    case 3: month = 4; break;
    case 4: month = 5; break;
    case 5: month = 6; break;
    case 6: month = 7; break;
    case 7: month = 8; break;
    case 8: month = 9; break;
    case 9: month = 10; break;
    case 10: month = 11; break;
    default: month = 12;
    }
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
