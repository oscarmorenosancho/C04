/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:35:56 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/29 18:15:57 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_this_base(char c, char *base, int *digit_value, unsigned int base_n)
{
	unsigned int	i;
	int				found;

	i = 0;
	found = 0;
	while (i < base_n && ! found)
	{
		if (base[i] == c)
			found = 1;
		else
			i++;
	}
	if (found)
	{
		*digit_value = i;
		return (1);
	}
	*digit_value = 0;
	return (0);
}

int	ft_take_signs(char **p)
{
	int	minus_counter;

	minus_counter = 0;
	while (**p == '+' || **p == '-')
	{
		if (**p == '-')
			minus_counter++;
		(*p)++;
	}
	if (minus_counter % 2)
		return (-1);
	return (1);
}

int	ft_atoi_m(char *str, char *base, unsigned int base_n)
{
	int		ret;
	int		s;
	char	*p;
	int		digit_value;

	p = str;
	ret = 0;
	while (*p && (*p) <= ' ')
		p++;
	s = ft_take_signs(&p);
	while (ft_is_this_base(*p, base, &digit_value, base_n))
	{
		ret *= base_n;
			ret += digit_value;
		p++;
	}
	ret *= s;
	return (ret);
}

int	ft_get_base_nb(char *base)
{
	unsigned int	base_n;

	base_n = 0;
	while (base[base_n])
		base_n++;
	return (base_n);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	base_n;
	unsigned int	i;
	unsigned int	j;

	base_n = ft_get_base_nb(base);
	if (base_n < 2)
	{
		base_n++;
		return (0);
	}
	i = 0;
	while (i < base_n)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ')
			return (0);
		j = i + 1;
		while (j < base_n)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (ft_atoi_m(str, base, base_n));
}
