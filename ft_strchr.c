/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:54:29 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:55:00 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
/*#include <stdio.h>
#include <stddef.h>

char *strchr(const char *str, int c);

int main(void) {
    const char *text = "Hello, World!";
    char search_char = 'o';
    char search_char_not_in_string = 'z';
    char search_null = '\0';
    
    // Buscar un carácter que está en la cadena
    char *result = strchr(text, search_char);
    if (result) {
        printf("Caracter '%c' encontrado en la posición: %ld\n",
       	search_char, result - text);
    } else {
        printf("Caracter '%c' no encontrado\n", search_char);
    }

    // Buscar un carácter que no está en la cadena
    result = strchr(text, search_char_not_in_string);
    if (result) {
        printf("Caracter '%c' encontrado en la posición: %ld\n",
       	search_char_not_in_string, result - text);
    } else {
        printf("Caracter '%c' no encontrado\n", search_char_not_in_string);
    }

    // Buscar el carácter nulo
    result = strchr(text, search_null);
    if (result) {
        printf("Caracter nulo encontrado en la posición: %ld\n", result - text);
    } else {
        printf("Caracter nulo no encontrado\n");
    }

    return 0;
}*/
