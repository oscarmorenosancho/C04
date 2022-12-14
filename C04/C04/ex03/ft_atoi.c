/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:35:56 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/29 18:32:31 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	int	ret;

	ret = ((c == ' ') || (c == '\n') || (c == '\t')
			|| (c == '\v') || (c == '\f') || (c == '\r'));
	return (ret);
}

int	ft_isnumeric(char c)
{
	int	ret;

	ret = (c >= '0' || c <= '9');
	return (ret);
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

int	ft_atoi(char *str)
{
	int		ret;
	int		s;
	char	*p;

	p = str;
	ret = 0;
	while (*p && ft_isspace(*p))
		p++;
	s = ft_take_signs(&p);
	while (*p && ft_isnumeric(*p))
	{
		ret *= 10;
		ret += *p - '0';
		p++;
	}
	ret *= s;
	return (ret);
}
