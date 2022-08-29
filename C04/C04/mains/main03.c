/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:51:40 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/25 16:00:23 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ft_atoi(char *str);

int main(int argc, char **argv)
{
    char    str[50] = "-2147483648";
    int     nbr1;
    int     nbr2;

    if (argc > 1)
        strcpy(str, argv[1]);
    printf("String que entra a ft_atoi y atoi: %s\n", str);
    nbr1 = ft_atoi(str);
    nbr2 = atoi(str);
    printf("Valor devuelto por ft_atoi: %d\n", nbr1);
    printf("Valor devuelto por atoi: %d\n", nbr2);
    printf("Nota: ft_atoi tiene más funcionalidad de atoi\n");
    printf("Nota: No tienen porqué coincidir los resultados en todos los casos.\n");
}
