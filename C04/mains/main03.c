#include<stdio.h>
#include<stdlib.h>

int ft_atoi(char *str);

int main(int argc, char **argv)
{
    char    str[50] = "-2147483648";
    int     nbr1;
    int     nbr2;

    if (argc > 1)
        strcpy(argv[1], str);
    printf("String que entra a ft_atoi y atoi: %d\n", str);
    nbr1 = ft_atoi(str);
    nbr2 = atoi(str);
    printf("Valor devuelto por ft_atoi: %d\n", nbr1);
    printf("Valor devuelto por atoi: %d\n", nbr2);
    printf("Nota: ft_atoi tiene más funcionalidad de atoi\n");
    printf("Nota: No tienen porqué coincidir los resultados en todos los casos.\n");
}