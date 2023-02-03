/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:23:23 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/03 19:42:30 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return(srclen);
	while(src[i]  && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(srclen);
}

int main()
{
	char src[] = "12345";
	char dst[] = "Hello";
	char src1[] = "12345";
    char dst1[] = "Hello";

	printf("Expected: \n");
	printf("%zu | %s\n", strlcpy(dst, src, 6), dst);
	printf("Actual Result: \n");
    printf("%zu | %s\n", ft_strlcpy(dst1, src1, 6), dst1);
	return (0);

}
