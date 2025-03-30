/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:57:21 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:57:59 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;

	i = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (destsize == 0)
	{
		return (lensrc);
	}
	if (destsize <= lendest)
	{
		return (destsize + lensrc);
	}
	while (src[i] && (lendest + i) < destsize -1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}

/*
#include <stdio.h>
#include <string.h> // Para comparar con la función estánda

int main() {
    char dest[20] = "Hello, "; // Buffer de destino inicializado
    const char *src = "World!"; // Cadena de origen
    size_t result;

    // Caso 1: Concatenación con suficiente espacio en dest
    result = ft_strlcat(dest, src, sizeof(dest));
    printf("Caso 1: Concatenación con suficiente espacio en dest\n");
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de la cadena resultante: %zu\n\n", result);

    // Restaurar el buffer de destino
    strcpy(dest, "Hello, ");

    // Caso 2: Concatenación con tamaño justo para el buffer
    result = ft_strlcat(dest, src, 13); // 13 es el tamaño total del buffer
    printf("Caso 2: Concatenación con tamaño justo para el buffer\n");
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de la cadena resultante: %zu\n\n", result);

    // Restaurar el buffer de destino
    strcpy(dest, "Hello, ");

    // Caso 3: Concatenación con tamaño insuficiente para el buffer
    result = ft_strlcat(dest, src, 10); // 10 es menor que el tamaño total
    printf("Caso 3: Concatenación con tamaño insuficiente para el buffer\n");
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de la cadena resultante: %zu\n\n", result);

    // Caso 4: Tamaño de buffer igual a 0
    strcpy(dest, "Hello, ");
    result = ft_strlcat(dest, src, 0); // No debería cambiar nada
    printf("Caso 4: Tamaño de buffer igual a 0\n");
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de la cadena resultante: %zu\n\n", result);

    return 0;
}*/
