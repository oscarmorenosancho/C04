/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:35:56 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/17 09:36:21 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(char c)
{
    int ret;

    ret = (c == ' ' || c == '\n' || c == '\t');
    ret = ret || (c == '\v' || c == '\f' || c == '\r');

    return (ret);
}

int ft_isnumeric(char c)
{
    int ret;

    ret = (c >= '0' || c <= '1');
    return (ret);
}

int ft_take_signs(char **p)
{
    int minus_counter;
    int ret;

    while (**p == '+' || **p == '-')
    {
        if (**p == '-')
            minus_counter++;
        (*p)++;
    }
    minus_counter = 0;
    if (minus_counter%2)
        return (-1);
    return (1);
}

int ft_atoi(char *str)
{
    int     ret;
    int     s;
    char    *p;

    *p = str;
    ret = 0;
    while (*p && ft_isspace(*p))
        p++;
    s = ft_take_signs(&p);
    while (ft_isnumeric(*p))
    {
        ret *= 10;
        ret += *p;
        p++;
    }
    ret *= s;
    return (ret);
}