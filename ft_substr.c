/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:10:04 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:10:34 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t str_len;
    char *substr;

    // Obtén la longitud de la cadena "s".
    str_len = ft_strlen(s);

    // Si el índice de inicio es mayor o igual a la longitud de la cadena, devuelve una cadena vacía.
    if (start >= str_len)
    {
        substr = malloc(1); // Reserva memoria para una cadena vacía.
        *substr = '\0'; // Establece el primer caracter de la cadena vacía como el carácter nulo.
        return (substr);
    }

    // Determina la longitud de la subcadena.
    if (len > (str_len - start))
        len = str_len - start;

    // Reserva memoria para la subcadena.
    substr = malloc((len + 1) * sizeof(char)); // La subcadena más el carácter nulo.

    if (!substr)
        return (NULL); // Si la reserva de memoria falla, devuelve NULL.

    // Copia la subcadena desde la cadena "s" a la cadena "substr".
    ft_strlcpy(substr, s + start, len);
    substr[len] = '\0'; // Asegúrate de que la subcadena termine con un carácter nulo.

    return (substr);
}
