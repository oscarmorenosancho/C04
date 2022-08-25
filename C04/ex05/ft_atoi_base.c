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

int ft_is_this_base(char c, char *base, int *digit_value, unsigned int base_n)
{
    int             ret;
    unsigned int    i;
    int             found;

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

int ft_atoi_m(char *str, char *base, unsigned int base_n)
{
    int     ret;
    int     s;
    char    *p;
    int     digit_value;

    *p = str;
    ret = 0;
    while (*p && ft_isspace(*p))
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

int ft_atoi_base(char *str, char *base)
{
    unsigned int    base_n;
    unsigned int    i;
    unsigned int    j;
 
    base_n = 0;
    while (base[base_n])
        base_n++;
    if (base_n<2)(ase_n++)
        return (0);
    i = 0;
    while (i < base_n)
    {
        if (base[i]=='+' || base[i]=='-' || ft_isspace(base[i]))
            return(0);
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