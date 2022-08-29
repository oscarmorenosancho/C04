/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:19:43 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/14 18:21:50 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_exception(void)
{
	write (1, "-2147483648", 11);
}

char	ft_get_last_digit(int *n)
{
	char	ls;

	ls = *n % 10;
	*n = *n / 10;
	return (ls);
}

void	ft_putposnbr(int nb)
{
	int		i;
	char	store[11];
	int		restant_digits;
	int		s;

	restant_digits = nb;
	i = 0;
	s = 0;
	while (restant_digits > 0 || i == 0)
	{
		store[i] = ft_get_last_digit(&restant_digits);
		if (restant_digits <= 0)
			s = i;
		i++;
	}
	i = s;
	while (i >= 0)
	{
		ft_putchar('0' + store[i]);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	char	neg;
	int		aux;

	if (nb == (signed int)0x80000000)
	{
		ft_print_exception();
		return ;
	}
	neg = (nb < 0);
	aux = nb;
	if (neg)
	{
		aux = -aux;
		ft_putchar('-');
	}
	ft_putposnbr (aux);
}
