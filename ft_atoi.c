/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:53:45 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/07 10:53:47 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

#define BLANKS " \n\t\f\v\r"
#define NUMBERS "0123456789"

int ft_isin(const char *str, char needle)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (needle == str[i])
        {    
            return(1);
            i++;
        }
    }
    return(0);
}
int ft_atoi(char *str)
{
    size_t i;
    size_t number;
    int sign;

    i = 0;
    sign = 1;
    while(ft_isin(*str, BLANKS))
        i++;
    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            sign = -1;
    while (ft_isin(NUMBERS , str[i]))
    {
        number *= 10;
        number += (str[i++] -48);
    }
    if (number > LONG_MAX && sign < 0) 
        return (0);
    else if (number > LONG_MAX && sign > 0) 
        return (-1);
    return(sign * number);
}