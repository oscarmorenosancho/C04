#include<stdio.h>
#include<stdlib.h>

void	ft_putnbr(int nb);

int main(int argc, char **argv)
{
    int     nbr;

    nbr = -2147483648;
    if (argc > 1)
        nbr = atoi(argv[1]);

    printf("Entero que entra a ft_putnbr: %d\n", nbr);
    ft_putnbr(nbr);
    printf("\nLinea anterior enviada por ft_putnbr\n");
}