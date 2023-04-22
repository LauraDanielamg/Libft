/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:38:44 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 16:49:51 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Compares two blocks of memory for equality.
 * 
 * @param s1 Pointer to the first block of memory to compare.
 * @param s2 Pointer to the second block of memory to compare.
 * @param n Number of bytes to compare.
 * 
 * @return an integer indicanting the difference between the first non-matching
 * bytes of the memory blocks or 0 if the memory blocks are equal.
 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*p1;
	const unsigned char		*p2;
	size_t					i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (i < n && *p1 == *p2)
	{
		p1++;
		p2++;
		i++;
	}
	if (i == n)
		return (0);
	else
		return (*p1 - *p2);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "hello";
    char s2[] = "world";
    size_t n = strlen(s1);

    // Test ft_memcmp
    int result1 = ft_memcmp(s1, s2, n);
    printf("Result of ft_memcmp: %d\n", result1);

    // Test memcmp
    int result2 = memcmp(s1, s2, n);
    printf("Result of memcmp: %d\n", result2);

    return 0;
}*/
