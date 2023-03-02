/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:18:44 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 16:36:43 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (NULL);	
}

/*int main()
{
	char *s = "Hola";
	int c = 'o';
	size_t n = 2;
	
	printf("%s\n",((char *)memchr(s, c, n)));
	printf("%s", ((char *)ft_memchr(s, c, n)));
	return(0);
}*/
