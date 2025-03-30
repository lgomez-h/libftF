/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:47:10 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:47:47 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*ptr;

	ch = (unsigned char)c;
	ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*ptr == ch)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h> // Para comparar con la versión original
#include "libft.h"  // Asegúrate de tener la declaración de ft_memchr aquí

int main(void)
{
    const char str[] = "Hello, world!";
    int c;
    size_t n;
    char *result;

    // Caso 1: Encontrar un carácter que está presente ('o')
    c = 'o';
    n = strlen(str);
    printf("Buscando '%c' en \"%s\" hasta %zu bytes:\n", c, str, n);
    result = ft_memchr(str, c, n);
    printf("Resultado ft_memchr: %s\n", result ? result : "NULL");
    result = memchr(str, c, n);
    printf("Resultado memchr: %s\n\n", result ? result : "NULL");

    // Caso 2: Buscar un carácter que no está presente ('z')
    c = 'z';
    printf("Buscando '%c' en \"%s\" hasta %zu bytes:\n", c, str, n);
    result = ft_memchr(str, c, n);
    printf("Resultado ft_memchr: %s\n", result ? result : "NULL");
    result = memchr(str, c, n);
    printf("Resultado memchr: %s\n\n", result ? result : "NULL");

    // Caso 3: Buscar carácter dentro de un número limitado de bytes
    c = 'o';
    n = 5; // Solo busca en los primeros 5 bytes
    printf("Buscando '%c' en \"%s\" hasta %zu bytes:\n", c, str, n);
    result = ft_memchr(str, c, n);
    printf("Resultado ft_memchr: %s\n", result ? result : "NULL");
    result = memchr(str, c, n);
    printf("Resultado memchr: %s\n\n", result ? result : "NULL");

    // Caso 4: Buscar el carácter nulo ('\0')
    c = '\0';
    n = strlen(str) + 1; // Incluye el carácter nulo al final de la cadena
    printf("Buscando '\\0' en \"%s\" hasta %zu bytes:\n", str, n);
    result = ft_memchr(str, c, n);
    printf("Resultado ft_memchr: %s\n", result ? result : "NULL");
    result = memchr(str, c, n);
    printf("Resultado memchr: %s\n", result ? result : "NULL");

    return 0;
}*/
