/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:25:40 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:25:48 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Converts an integer to a string.
 * 
 * @param n The integer to be converted.
 * 
 * @return The converted string. If the conversion fails, returns NULL
 */

#include "libft.h"

static size_t	ft_intlen(long n)
{
	size_t	count;

	count = 0;
	if (n == 0)
	{
		count++;
		return (count);
	}
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	strnum = (char *)malloc(sizeof(char) * len + 1);
	if (!strnum)
		return (NULL);
	strnum[len--] = '\0';
	if (n == 0)
		strnum[0] = '0';
	if (nb < 0)
	{
		strnum[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		strnum[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (strnum);
}
/*
#include <stdio.h>
int main(void)
{
    int num1 = 12345;
    int num2 = -6789;
    int num3 = 0;
    char *str1, *str2, *str3;

    str1 = ft_itoa(num1);
    str2 = ft_itoa(num2);
    str3 = ft_itoa(num3);

    printf("Number: %d, String: %s\n", num1, str1);
    printf("Number: %d, String: %s\n", num2, str2);
    printf("Number: %d, String: %s\n", num3, str3);

    free(str1);
    free(str2);
    free(str3);

    return 0;
}*/