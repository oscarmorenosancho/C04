/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:51:19 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/26 14:39:44 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
    char	str[50] = "String de ejemplo";

    if (argc > 1)
        strcpy(str, argv[1]);
        
    printf("Cadena que entra a ft_putstr: %s\n", str);
    ft_putstr(str);
    printf("\nLinea anterior enviada por ft_putstr\n");
}
