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
/*#include <stdio.h>
int main(void)
{
    char *str = "123";
    int expected = atoi(str);
    int actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

    str = "-456";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

    str = "2147483647";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");


    str = "-2147483648";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

    str = "not an integer";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

	str = "";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");
	
    return 0;
}*/