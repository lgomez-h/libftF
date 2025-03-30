/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:49:19 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:49:40 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src)
	{
		return (dest);
	}
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s [n];
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h> // Para comparar con la función estándar
#include <stddef.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n);

int main() {
    char buffer[50] = "Hello, World!"; // Cadena de origen
    printf("Original buffer: %s\n", buffer);

    // Usar la función estándar memmove para mover la cadena
    memmove(buffer + 7, buffer, 13); // Mover "Hello, World!" a la posición 7
    printf("After standard memmove: %s\n", buffer);

    // Restaurar el buffer
    strcpy(buffer, "Hello, World!");

    // Usar la función personalizada ft_memmove
    ft_memmove(buffer + 7, buffer,13); // Mover "Hello, World!" a la posición 7
    printf("After custom ft_memmove: %s\n", buffer);

    return 0;
}*/
