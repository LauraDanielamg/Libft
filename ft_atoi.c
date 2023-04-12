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
/**
 * @brief Converts a string of charactes representing an integer into an actual
 * integer value.
 * 
 * @param str Pointer to the string of characters to be converted.
 * 
 * @return If the string is a valid representation of an integer, returns the
 * integer value of the string. Otherwise returns 0.
 */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	long long int		result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result > INT_MAX && sign == 1)
			return (INT_MAX);
		else if (result > INT_MAX && sign == -1)
			return (INT_MIN);
		str++;
	}
	return (sign * (int)result);
}
