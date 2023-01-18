/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:49:36 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/18 11:29:58 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
*/
size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
	int i;
	int j;
	int dlen;
	int slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = dlen;
	if (!dstsize || dstsize <= dlen)
		return (slen + dstsize);
	while (*src && i < dstsize - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

/*int main ()
{
    char src[] = "Hola";
    char dest[] = "nana";

    printf("%zu | %s", ft_strlcat(dest, src, 5), dest);
    return (0);
}*/
