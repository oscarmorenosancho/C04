/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:51:49 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/29 17:07:56 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ft_putnbr_base(int nbr, char *base);

int main(int argc, char **argv)
{
    int     nbr;
    char    base[50] = "0123456789";

    nbr = -2147483648;
    if (argc > 2)
    {
        nbr = atoi(argv[1]);
        strcpy(base, argv[2]);
    }
    printf("Entero que entra a ft_putnbr_base: %d\n", nbr);
    printf("String de base que entra a ft_putnbr_base: %s\n", base);
    ft_putnbr_base(nbr, base);
    printf("\nLinea anterior enviada por ft_putnbr_base\n");
}
