/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:51:09 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/25 15:51:13 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str);

int main(int argc, char **argv)
{
    char            str[50] = "String de ejemplo";
    char            coinc[] = "coincide"
    char            no_coinc[] = "NO coindide"
    unsigned int    len1;
    unsigned int    len2;

    if (argc > 1)
        strcpy(argv[1], str);

    len1 = ft_strlen(str);
    len2 = strlen(str);
    printf("Cadena que entra a ft_strlen: %s\n", str);
    printf("Longitud de la cadena medida por ft_strlen: %s\n", len1);
    printf("Longitud de la cadena medida por    strlen: %s\n", len2);
    printf("Las longitudes medidas por strlen y ft_strlen %s\n", (len1 == len2) ? coinc : no_coinc);
}
