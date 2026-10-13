# Домашнее задание к работе 7

## Условие задачи

С января 2000 года по некоторый день прошло n месяцев и 3 дня.
Определить название месяца этого дня. Предусмотреть возможность задания
другого числа дней.

## 1. Алгоритм
### Алгоритм
```
1. Начало
2. Ввести n, days
3. n = (n + (days - 1) / 30) % 12
4. switch (n): 0-Январь, 1-Февраль, ..., 10-Ноябрь, 11-Декабрь
5. Конец
```
## 2. Реализация программы
```
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
```
### 3. Результаты работы программы
```
Введите количество месяцев: 11
Введите количество дней: 40
Январь

Введите количество месяцев: 25
Введите количество дней: 3
Февраль
```
### 4. Информация о разработчике

Дегтярева Полина, бИЦТ-262
