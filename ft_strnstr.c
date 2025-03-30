/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:00:56 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:01:24 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = ft_strlen(needle);
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack != '\0' && len >= n)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, n) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include "libft.h" 

int main(void)
{
    const char *haystack1 = "Hello, World!";
    const char *needle1 = "World";
    const char *needle2 = "Hello";
    const char *needle3 = "!";
    const char *needle4 = "test";
    const char *needle5 = "";

    // Caso 1: Buscamos "World" en "Hello, World!" con 
    // un len suficientemente grande
    printf("Caso 1: %s\n", ft_strnstr(haystack1, needle1, 15));
// Esperado: "World!"

    // Caso 2: Buscamos "Hello" en "Hello, World!" dentro de
    // los primeros 5 caracteres
    printf("Caso 2: %s\n", ft_strnstr(haystack1, needle2, 5)); 
// Esperado: "Hello, World!"

    // Caso 3: Buscamos "!" en "Hello, World!" con len suficiente
    printf("Caso 3: %s\n", ft_strnstr(haystack1, needle3, 15)); // Esperado: "!"

    // Caso 4: Buscamos "test" en "Hello, World!" con len suficiente
    // (no existe)
    printf("Caso 4: %s\n", ft_strnstr(haystack1, needle4, 15)); 
// Esperado: "(null)"

    // Caso 5: Buscamos "" (cadena vacía) en "Hello, World!"
    printf("Caso 5: %s\n", ft_strnstr(haystack1, needle5, 15));
//Esperado: "Hello, World!"

    return 0;
}*/
