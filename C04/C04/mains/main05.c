/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:51:57 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/29 17:52:44 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ft_atoi_base(char *str, char *base);

int main(int argc, char **argv)
{
    char    str[50] = "-2147483648";
	char 	base[50] = "0123456789";
    int     nbr1;
    long     nbr2;

    if (argc > 2)
    {
        strcpy(str, argv[1]);
        strcpy(base, argv[2]);
    }
    printf("String que entra a ft_atoi_base: %s\n", str);
    nbr1 = ft_atoi_base(str, base);
    nbr2 = strtol(str, NULL, strlen(base));
    printf("Valor devuelto por ft_atoi_base: %d\n", nbr1);
    printf("Valor devuelto por strtol: %ld\n", nbr2);
    printf("Nota: ft_atoi_base y strlol no tienen idénticas funcionalidades\n");
    printf("Nota: No tienen porqué coincidir los resultados en todos los casos.\n");
}
