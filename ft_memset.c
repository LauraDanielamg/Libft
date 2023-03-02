/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:02:15 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 10:32:26 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *a;
	
	a = b;
	while(len > 0)
	{
		*a = (char) c;
		len--;
		a++;
	}
	return (b);
}
/*int main()
{	
	char b[4];
	char a[4];
	int c = 'A';
	size_t len = 2;

	memset(b, c, len);
	ft_memset(a, c, len);
	return (0);
}*/