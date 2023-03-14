/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:11:48 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/12 11:12:07 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    if (!s) // Verificar si la cadena de entrada es nula
        return NULL;
    
    char **result = (char **)malloc(sizeof(char *) * 128); // Reservar memoria para un array de punteros de tamaño inicial de 128
    if (!result) // Verificar si se pudo reservar memoria
        return NULL;
    
    int i = 0;
    int j = 0;
    int k = 0;
    while (s[i] != '\0') {
        if (s[i] == c) { // Encontrar el carácter delimitador
            if (k > 0) { // Agregar la subcadena anterior al array si no está vacía
                result[j] = (char *)malloc(sizeof(char) * (k + 1));
                if (!result[j]) { // Verificar si se pudo reservar memoria
                    j--; // Retroceder para sobrescribir el último puntero
                    while (j >= 0) {
                        free(result[j]);
                        j--;
                    }
                    free(result);
                    return NULL;
                }
                result[j][k] = '\0'; // Agregar el carácter nulo al final de la subcadena
                k = 0; // Reiniciar el contador de caracteres
                j++; // Incrementar el índice del array
            }
        }
        else { // Agregar el carácter actual a la subcadena
            if (k == 0)
                result[j] = NULL; // Inicializar el puntero a NULL para el primer carácter de la primera subcadena
            k++;
        }
        i++; // Incrementar el índice de la cadena de entrada
    }
    
    if (k > 0) { // Agregar la última subcadena al array si no está vacía
        result[j] = (char *)malloc(sizeof(char) * (k + 1));
        if (!result[j]) { // Verificar si se pudo reservar memoria
            j--; // Retroceder para sobrescribir el último puntero
            while (j >= 0) {
                free(result[j]);
                j--;
            }
            free(result);
            return NULL;
        }
        result[j][k] = '\0'; // Agregar el carácter nulo al final de la última subcadena
        j++; // Incrementar el índice del array
    }
    
    result[j] = NULL; // Agregar un puntero NULL al final del array
    
    return result;
}
