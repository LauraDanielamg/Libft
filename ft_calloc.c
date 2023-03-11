/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:38:31 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/10 23:38:34 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len);

void *ft_calloc(size_t nmemb, size_t size) 
{
    // calcula el tamaño total de memoria requerida
    size_t total_size = nmemb * size;
    
    // reserva suficiente memoria utilizando malloc
    void *ptr = malloc(total_size);
    
    // verifica si malloc devolvió un puntero válido
    if (ptr == NULL) {
        return NULL;
    }
    
    // inicializa el bloque de memoria reservado con ceros
    ft_memset(ptr, 0, total_size);
    
    // devuelve un puntero al bloque de memoria reservado
    return ptr;
}