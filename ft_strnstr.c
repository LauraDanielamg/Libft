/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:32:19 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/07 09:32:21 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return ((char *) haystack);
    i = 0;
    while(haystack[i] && i < len)
    {
        if(haystack[i] == *needle)
        {
            j = 0;
            while(needle[j] && haystack[i+j] && i + j < len)
            {
                if (haystack[i + j] != needle[j])
                    break;
                j++;
            }
            if (!needle[j])
                return((char *) & haystack[i]);
        }
        i++;
    }
    return (NULL);
}

/*int main()
{
    char *haystack = "Hola gente";
    char *needle = "gen";

    printf("%s", ft_strnstr(haystack, needle, 11));
    return (0);
}*/
