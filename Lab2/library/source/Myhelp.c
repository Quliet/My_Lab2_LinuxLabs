#include <stdio.h>

void promt()//Ключи
{
    printf("\nДля вывода подсказки введите 'Lab2 -help' или 'Lab2 -h'\n");
}
void help()
{
    printf("\nВас приветствует руководство по Lab2\nЭта тестовая программа показывает пример работы с бибилотеками и работы с компилятором\n");
    printf("Реализовано несколько ключей:\n -h(-help): Подсказка\n -s: Сумма двух чисел\n -d: Разность двух чисел\n");
    printf("-s: Lab2 -s (число) (число) [A+B]\n");
    printf("-d: Lab2 -d (число) (число) [A-B]\n");
    printf("[Большего функционала стоит ожидать в более новых версиях программы (нет)]\n\n");
} 
