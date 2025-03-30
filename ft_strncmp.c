/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:00:23 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:00:42 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h> // Para comparar con strncmp estándar
#include "libft.h"  // Asegúrate de que libft.h incluye la declaración de strncmp

int main(void) {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    const char *str3 = "Hello, Universe!";
    const char *str4 = "Hello,";
    const char *str5 = "Hello, World! Extra";

    printf("Comparación 1: %d\n", strncmp(str1, str2, 5));
// Esperado: 0 (iguales)
    printf("Comparación 2: %d\n", strncmp(str1, str3, 7)); 
// Esperado: diferencia en 'W' y 'U'
    printf("Comparación 3: %d\n", strncmp(str1, str4, 6));
// Esperado: diferencia en ' ' y '\0'
    printf("Comparación 4: %d\n", strncmp(str1, str5, 15));
// Esperado: diferencia en el carácter extra

    return 0;
}*/
