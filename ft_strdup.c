/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:55:16 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:55:43 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned int	i;
	char			*str2;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = (char *)malloc(i + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	ft_memcpy(str2, str, i + 1);
	return (str2);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para comparar con strdup
#include "libft.h"  // Asegúrate de que libft.h incluye la
		    // declaración de ft_strdup

int main(void) {
    const char *original = "Hello, World!";
    char *duplicate;

    // Usar ft_strdup
    duplicate = ft_strdup(original);
    if (duplicate == NULL) {
        printf("Error: No se pudo duplicar la cadena.\n");
        return 1;
    }

    // Comparar con la función estándar strdup para verificar la corrección
    char *std_duplicate = strdup(original);
    if (std_duplicate == NULL) {
        printf("Error: No se pudo duplicar la cadena con strdup estándar.\n");
        free(duplicate);
        return 1;
    }

    // Mostrar resultados
    printf("Original: %s\n", original);
    printf("Duplicado (ft_strdup): %s\n", duplicate);
    printf("Duplicado (strdup): %s\n", std_duplicate);

    // Verificar si ambas cadenas son iguales
    if (strcmp(duplicate, std_duplicate) == 0) {
        printf("La función ft_strdup funciona correctamente.\n");
    } else {
        printf("La función ft_strdup no funciona correctamente.\n");
    }

    // Liberar memoria
    free(duplicate);
    free(std_duplicate);

    return 0;
}*/
