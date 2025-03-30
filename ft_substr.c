/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:03:24 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:03:40 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_start_is_out(void)
{
	char	*s2;

	s2 = malloc(1);
	if (s2 == NULL)
	{
		return (NULL);
	}
	s2[0] = '\0';
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	size_s;

	if (!s)
	{
		return (NULL);
	}
	size_s = ft_strlen(s);
	if (start >= size_s)
	{
		return (ft_start_is_out());
	}
	if (len > size_s - start)
	{
		len = size_s - start;
	}
	s2 = malloc(len +1);
	if (s2 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy (s2, (s + start), (len +1));
	return (s2);
}
/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *original = "Hola, Mundo!";
    char *resultado;

    // Caso 1: Extraer una subcadena válida
    resultado = ft_substr(original, 7, 5); // Extraer "Mundo"
    if (resultado == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    printf("Cadena original: '%s'\n", original);
    printf("Subcadena (start=7, len=5): '%s'\n", resultado);
    free(resultado);

    // Caso 2: Extraer subcadena desde un índice fuera
    // de la longitud de la cadena
    resultado = ft_substr(original, 20, 5); // Índice fuera de rango
    if (resultado == NULL) {
    printf("Error al asignar memoria.\n");
    return 1;
    }
    printf("Subcadena (start=20, len=5): '%s'\n", resultado);
    free(resultado);

    // Caso 3: Extraer subcadena más larga que el resto de la cadena
    resultado = ft_substr(original, 5, 20); // Extraer desde "Mundo!" en adelante
    if (resultado == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    printf("Subcadena (start=5, len=20): '%s'\n", resultado);
    free(resultado);

    return 0;
}*/
