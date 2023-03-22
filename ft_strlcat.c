/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:49:36 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/03 18:56:01 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;	
	size_t	i;
	size_t	j;

	if (dst == NULL || src == NULL)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = dstlen;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
/*int main ()
{
	char dest[13] = "Hello";
	char src[] = " World!";
	char dest1[6] = "Hello";
    char src1[] = " World!";
	char dest2[13] = "Hello";
    char src2[] = " World!";
    char dest3[6] = "Hello";
    char src3[] = " World!";
	
	printf("Expected:\n");
	printf("%lu | %s\n", strlcat(dest, src, 13), dest);
	printf("%lu | %s\n", strlcat(dest1, src1, 6), dest1);

	printf("Actual result:\n");
	printf("%lu | %s\n", ft_strlcat(dest2, src2, 13), dest2);
	printf("%lu | %s\n", ft_strlcat(dest3, src3, 6), dest3);
	
	return (0);
}*/
