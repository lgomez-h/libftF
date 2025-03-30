/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:56:31 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:56:53 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*end_str;
	size_t	size_s1;
	size_t	size_s2;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	end_str = malloc(size_s1 + size_s2 + 1);
	if (end_str == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(end_str, s1, size_s1 + 1);
	ft_strlcat(end_str, s2, (size_s1 + size_s2 +1));
	return (end_str);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para comparar con la función estándar strcat
#include "libft.h"  // Asegúrate de que libft.h incluye la
		    // declaración de ft_strjoin

int main(void) {
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    char *joined_str;

    // Usar ft_strjoin
    joined_str = ft_strjoin(str1, str2);
    if (joined_str == NULL) {
        printf("Error: No se pudo unir las cadenas.\n");
        return 1;
    }

    // Comparar con la función estándar strcat para verificar la corrección
    char *expected_str = malloc(strlen(str1) + strlen(str2) + 1);
    if (expected_str == NULL) {
        printf("Error: No se pudo asignar memoria para la cadena esperada.\n");
        free(joined_str);
        return 1;
    }
    strcpy(expected_str, str1);
    strcat(expected_str, str2);

    // Mostrar resultados
    printf("Cadena 1: %s\n", str1);
    printf("Cadena 2: %s\n", str2);
    printf("Unido (ft_strjoin): %s\n", joined_str);
    printf("Unido (strcat): %s\n", expected_str);

    // Verificar si ambas cadenas son iguales
    if (strcmp(joined_str, expected_str) == 0) {
        printf("La función ft_strjoin funciona correctamente.\n");
    } else {
        printf("La función ft_strjoin no funciona correctamente.\n");
    }

    // Liberar memoria
    free(joined_str);
    free(expected_str);

    return 0;
}*/
