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

// Include the ft_striteri function here

// Example function to be passed to ft_striteri
void print_char_with_index(unsigned int index, char *c)
{
    printf("Character at index %u: %c\n", index, *c);
}

// Another example function to be passed to ft_striteri
void to_uppercase(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
    {
        *c = *c - 'a' + 'A';
    }
}

int main()
{
    // Test case 1: Print each character along with its index
    char test_string1[] = "Hello, World!";
    printf("Test 1: Print each character along with its index\n");
    ft_striteri(test_string1, print_char_with_index);
    printf("\n");

    // Test case 2: Convert the string to uppercase
    char test_string2[] = "Hello, World!";
    printf("Test 2: Convert the string to uppercase\n");
    ft_striteri(test_string2, to_uppercase);
    printf("Modified string: %s\n", test_string2);
    printf("\n");

    // Test case 3: Pass NULL as the string
    printf("Test 3: Pass NULL as the string\n");
    ft_striteri(NULL, print_char_with_index);
    printf("\n");

    // Test case 4: Pass NULL as the function
    printf("Test 4: Pass NULL as the function\n");
    ft_striteri(test_string1, NULL);
    printf("\n");

    return 0;
}*/