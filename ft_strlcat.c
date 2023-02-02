/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:49:36 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/02 17:36:38 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t i;
	size_t j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = dstlen;

	if (dstsize == 0)
		return (dstsize + srclen);
	while (src[i] != '\0' && i < dstsize - dstlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstsize + srclen);

}

int main ()
{
	char dest[13] = "Hello";
	char src[] = " World!";
	
	printf("Expected:\n");
	printf("%lu | %s\n", strlcat(dest, src, 13), dest);
	printf("%lu | %s\n", strlcat(dest, src, 4), dest);

	printf("Actual result:\n");
	printf("%zu | %s", ft_strlcat(dest, src, 12), dest);
	
	return (0);
}
