#include <stdio.h>
#include <stdlib.h>

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
