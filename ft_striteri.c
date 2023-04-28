/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:34:09 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:34:16 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Applies a function to each character of a string, along with its 
 * index
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character aking as parameters the 
 * index of each character and a pointer to the character itself
 * 
 * @return None
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*#include <stdio.h>

void custom_function(unsigned int i, char *c)
{
    // Modify the character, for example, by increasing its ASCII value by 1
    *c = *c + 1;
}

int main()
{
    char test_str[] = "Hello, World!";

    printf("Original string: %s\n", test_str);
    ft_striteri(test_str, custom_function);
    printf("Modified string: %s\n", test_str);

    return 0;
}
}*/