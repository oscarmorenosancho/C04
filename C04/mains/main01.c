#include<stdio.h>

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
    char            str[50] = "String de ejemplo";

    if (argc > 1)
        strcpy(argv[1], str);
        
    printf("Cadena que entra a ft_putstr: %s\n", str);
    ft_putstr(str);
    printf("\nLinea anterior enviada por ft_putstr\n");
}