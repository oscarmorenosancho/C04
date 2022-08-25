/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:51:49 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/25 15:51:52 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void ft_putnbr_base(int nbr, char *base);

int main(int argc, char **argv)
{
    int     nbr;
    char    base[50] = "0123456789";

    nbr = -2147483648;
    if (argc > 2)
    {
        nbr = atoi(argv[1]);
        strcpy(argv[2], base)
    }
    printf("Entero que entra a ft_putnbr_base: %d\n", nbr);
    printf("String de base que entra a ft_putnbr_base: %s\n", base);
    ft_putnbr_base(nbr, base);
    printf("\nLinea anterior enviada por ft_putnbr_base\n");
}
