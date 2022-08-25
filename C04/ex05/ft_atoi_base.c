/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
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

int ft_is_this_base(char c, char *base, int *digit_value, int base_len)
{
    int ret;
    int i;
    int found;

    i = 0;
    found = 0;
    while (i < base_len && ! found)
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

int ft_atoi_m(char *str, char *base)
{
    int     ret;
    int     s;
    char    *p;
    int     base_len;
    int     digit_value;

    base_len = 0;
    while (base[base_len])
        base_len++;
    *p = str;
    ret = 0;
    while (*p && ft_isspace(*p))
        p++;
    s = ft_take_signs(&p);
    while (ft_is_this_base(*p, base, &digit_value, base_len))
    {
        ret *= base_len;
        ret += digit_value;
        p++;
    }
    ret *= s;
    return (ret);
}

int ft_atoi_base(char *str, char *base)
{
    //Check base is válid


    return (ft_atoi_m(str, base));
}