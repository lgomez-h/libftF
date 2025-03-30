/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:48:07 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:48:27 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*mem1;
	const unsigned char	*mem2;

	mem1 = (const unsigned char *)s1;
	mem2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*mem1 != *mem2)
		{
			return (*mem1 - *mem2);
		}
		mem1++;
		mem2++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h> // Para comparar con la versión original
#include "libft.h"  // Asegúrate de tener la declaración de ft_memcmp aquí

int main(void)
{
    char str1[] = "abcdef";
    char str2[] = "abcdez";
    char str3[] = "abcdef";
    char str4[] = "abcdEf"; // Case-sensitive
    size_t n;

    // Caso 1: Comparar dos cadenas iguales
    n = 6;
    printf("Comparando '%s' y '%s' hasta %zu bytes:\n", str1, str3, n);
    printf("Resultado ft_memcmp: %d\n", ft_memcmp(str1, str3, n));
    printf("Resultado memcmp: %d\n\n", memcmp(str1, str3, n));

    // Caso 2: Comparar dos cadenas diferentes (último carácter)
    n = 6;
    printf("Comparando '%s' y '%s' hasta %zu bytes:\n", str1, str2, n);
    printf("Resultado ft_memcmp: %d\n", ft_memcmp(str1, str2, n));
    printf("Resultado memcmp: %d\n\n", memcmp(str1, str2, n));

    // Caso 3: Comparar cadenas con diferencia en un carácter (case-sensitive)
    n = 6;
    printf("Comparando '%s' y '%s' hasta %zu bytes:\n", str1, str4, n);
    printf("Resultado ft_memcmp: %d\n", ft_memcmp(str1, str4, n));
    printf("Resultado memcmp: %d\n\n", memcmp(str1, str4, n));

    // Caso 4: Comparar parte de la cadena (primeros 4 caracteres)
    n = 4;
    printf("Comparando '%s' y '%s' hasta %zu bytes:\n", str1, str2, n);
    printf("Resultado ft_memcmp: %d\n", ft_memcmp(str1, str2, n));
    printf("Resultado memcmp: %d\n\n", memcmp(str1, str2, n));

    return 0;
}*/
