/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:48:45 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:49:01 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (dest == src)
	{
		return (dest);
	}
	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h> // Para comparar con la función estándar
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main() {
    char src[] = "Hello, World!"; // Cadena de origen
    char dest[20]; // Buffer de destino

    // Inicializar el buffer de destino con ceros
    memset(dest, 0, sizeof(dest));

    // Usar la función estándar memcpy para comparación
    memcpy(dest, src, strlen(src) + 1); // Copiar la cadena de origen a destino
    printf("Standard memcpy: dest = \"%s\"\n", dest);

    // Limpiar el buffer de destino
    memset(dest, 0, sizeof(dest));

    // Usar la función personalizada ft_memcpy
    ft_memcpy(dest, src, strlen(src) + 1); // Copiar la cadena de origen a 
    destino
    printf("Custom ft_memcpy: dest = \"%s\"\n", dest);

    return 0;
}*/
