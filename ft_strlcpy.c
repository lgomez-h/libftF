/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:58:23 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:58:47 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
    int main(void) {
    char dest[20];
    const char *src = "Hello, world!";
    size_t n;
    size_t result;

   // Caso 1: Copia con suficiente espacio en dest
    n = 20;
    result = ft_strlcpy(dest, src, n);
    printf("Caso 1: Copia con suficiente espacio en dest\n");
    printf("Fuente: \"%s\"\n", src);
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de src: %zu\n\n", result);

    // Caso 2: Copia con tamaño justo para el buffer
    n = 13;
    result = ft_strlcpy(dest, src, n);
    printf("Caso 2: Copia con tamaño justo para el buffer\n");
    printf("Fuente: \"%s\"\n", src);
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de src: %zu\n\n", result);

    // Caso 3: Copia con tamaño insuficiente para el buffer
    n = 5;
    result = ft_strlcpy(dest, src, n);
    printf("Caso 3: Copia con tamaño insuficiente para el buffer\n");
    printf("Fuente: \"%s\"\n", src);
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de src: %zu\n\n", result);

    // Caso 4: Tamaño de buffer igual a 0
    n = 0;
    result = ft_strlcpy(dest, src, n);
    printf("Caso 4: Tamaño de buffer igual a 0\n");
    printf("Fuente: \"%s\"\n", src);
    printf("Destino: \"%s\"\n", dest);  // No debería cambiar nada
    printf("Longitud total de src: %zu\n\n", result);

    // Caso 5: Buffer vacío y fuente vacía
    n = 10;
    src = "";
    result = ft_strlcpy(dest, src, n);
    printf("Caso 5: Buffer vacío y fuente vacía\n");
    printf("Fuente: \"%s\"\n", src);
    printf("Destino: \"%s\"\n", dest);
    printf("Longitud total de src: %zu\n", result);

return(0);
}*/
