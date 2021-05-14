#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void Summ(char **av, int ac)
{
    int sum = atoi(av[2]);
    printf("Результат суммирования:\n");
    printf("%d ",atoi(av[2]));
    for(int i = 3; i<ac; i++)
    {
        if((ac-(i-1))>1)
            printf("+ ");
        printf("%d ",atoi(av[i]));
        sum+=atoi(av[i]);
        
    }
    printf("= %d\n", sum);    
}
void Diff(char **av, int ac)
{
    int sum = atoi(av[2]);
    printf("Результат разности:\n");
    printf("%d ",atoi(av[2]));
    for(int i = 3; i<ac; i++)
    {
        if((ac-(i-1))>1)
            printf("- ");
        printf("%d ",atoi(av[i]));
        sum-=atoi(av[i]);
        
    }
    printf("= %d\n", sum);    
}


void Keys(char **av, int ac)
{
    printf("[1] %s\n",av[1]);
    
    if(!strcmp(av[1], "-h"))
        help();
    else 
        if(!strcmp(av[1], "-help"))
            help();
        else
            if(!strcmp(av[1], "-s"))
            {
                printf("Key: -s\n");
                printf("[Debug 1]: %d\n", atoi(av[2]));
                Summ(av, ac);
            }
            else
                if(!strcmp(av[1], "-d"))
                {
                    printf("Key: -d\n");
                    printf("[Debug 1]: %d\n", atoi(av[2]));
                    Diff(av, ac);
                }
                else
                    promt();
}

int main(int ac, char **av)
{
    printf("[Debug]: %d\n", ac);
    if(ac == 1)
    {
        promt();
    }
    else
    {
        char this[2] = "";
        strncpy(this, av[1], 1);
        if(this[0] == '-')
            Keys(av, ac);
        else
            promt();
    }
}
