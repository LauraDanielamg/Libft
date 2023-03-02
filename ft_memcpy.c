/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:14:42 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 11:39:13 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	
	if (dst == src || n == 0)
		return(dst);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return(dst);
}

/*int main()
{
	char dest[5];
	char *source = "Hola";
	size_t len = 2;
	char dest1[5];
	char *source1 = "Hola";


	printf("%s\n",((char*)memcpy(dest, source, len)));
	printf("%s\n", ((char*)ft_memcpy(dest1, source1, len)));
	
	return (0);
}*/
