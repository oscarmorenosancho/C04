/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:19:43 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/14 18:21:50 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_exception(char *base_code, int base)
{
	write (1, "-2147483648", 11);
}

char	ft_get_last_digit(int *n, int base)
{
	char	ls;

	ls = *n % base;
	*n = *n / base;
	return (ls);
}

void	ft_putposnbr(int nb, char *base_code, int base)
{
	int		i;
	char	store[11];
	int		restant_digits;
	int		s;
    char    c;

	restant_digits = nb;
	i = 0;
	s = 0;
	while (restant_digits > 0 || i == 0)
	{
		store[i] = ft_get_last_digit(&restant_digits, base);
		if (restant_digits <= 0)
			s = i;
		i++;
	}
	i = s;
	while (i >= 0)
	{
        c = base_code[store[i]];
        write(1, &c, 1);
		i--;
	}
}

void	ft_putnbr(int nb, char *base_code, int base)
{
	char	neg;
	int		aux;

	if (nb == (signed int)0x80000000)
	{
		ft_print_exception(base_code, base);
		return ;
	}
	neg = (nb < 0);
	aux = nb;
	if (neg)
	{
		aux = -aux;
        write(1, "-", 1);
	}
	ft_putposnbr (aux, base_code, base);
}

void ft_putnbr_base(int nbr, char *base)
{
    int     base_n;

    base_n = 0;
    while (base[base_n])
        base_n++;
    /* check if base is valid */

    ft_putnbr(nbr, base, base_n)
}