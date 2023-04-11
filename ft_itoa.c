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

#include "libft.h"

static size_t	num_len(int n)
{
	size_t	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	fill_str(char *str, size_t len, int n, int sign)
{
	size_t	i;

	i = len;
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		str[i] = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	else
		str[0] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = num_len(n) + (sign == -1);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (sign == -1)
		n = -n;
	fill_str(str, len, n, sign);
	return (str);
}
