/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:40:34 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 13:01:33 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dest;
	const unsigned char		*source;
	size_t					i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (dest > source)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
/*int main()
{
	char dest[5];
	char source[5] = "Hola";
	size_t len = 4;
	char dest1[5];
	char source1[5] = "Hola";

	printf("%s\n", ((char *)memmove(dest, source, len)));
	printf("%s", ((char *)ft_memmove(dest1, source1, len)));

	return (0);
}*/
