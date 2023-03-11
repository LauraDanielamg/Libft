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

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;

    for (size_t i = 0; i < n; i++)
    {
        if (p1[i] != p2[i])
        {
            // Devolver la diferencia entre los dos bytes diferentes
            return (int)(p1[i] - p2[i]);
        }
    }

    // Los bloques de memoria son iguales
    return 0;
}

/*int main()
{
	char *s1 = "P";
	char *s2 = "Avis";
	size_t n = 4;

	printf("%s\n", memcmp(s1,s1,n));
	return(0);
}
*/