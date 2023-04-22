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
/**
 * @brief Sets a block of memory with an specific value
 * 
 * @param b block of memory.
 * @param c value to fill. 
 * @param len leght of block.
 */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len > 0)
	{
		*a = (char) c;
		len--;
		a++;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[10];
    char arr2[10];
    int val = 'X';

    ft_memset(arr1, val, 10);
    memset(arr2, val, 10);

    if (memcmp(arr1, arr2, 10) == 0)
    {
        printf("ft_memset and memset produced identical results\n");
    }
    else
    {
        printf("ft_memset and memset produced different results\n");
    }

    return 0;
}*/