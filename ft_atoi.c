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

int ft_atoi(const char *str)
{
    int sign = 1;
    long long int result = 0;

    // Ignorar espacios en blanco iniciales
    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;

    // Verificar el signo
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // Convertir los dígitos
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        // Verificar desbordamiento
        if (result > INT_MAX && sign == 1)
            return INT_MAX;
        else if (result > INT_MAX && sign == -1)
            return INT_MIN;
        str++;
    }

    return sign * (int)result;
}