#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyLib.h"

void ErrInf()
{
    int I=0;
    while(1)
    {
        I++;
    }
}

void ErrArray()
{
    int A[10];
    for(int i=0; i<10; i++)
        A[i]=1;
    for(int i=0; i<30; i++)
    {
        printf("%d ", A[i]);
    }
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
                    if(!strcmp(av[1], "-I"))
                    {
                        ErrInf();
                    }
                    else
                        if(!strcmp(av[1], "-A"))
                        {
                            ErrArray();
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
