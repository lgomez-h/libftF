/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:59:43 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:59:59 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		cnt;

	if (!s || !f)
	{
		return (NULL);
	}
	str = (char *) malloc(ft_strlen(s) + 1);
	if (!str)
	{
		return (NULL);
	}
	cnt = 0;
	while (s[cnt])
	{
		str[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	str[cnt] = '\0';
	return (str);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Para toupper
#include "libft.h"

// Función que será pasada a ft_strmapi, que
// convierte cada carácter en mayúscula.
char to_uppercase(unsigned int i, char c) {
    (void)i; // Ignoramos el índice ya que no es
	     // necesario en esta transformación.
    if (c >= 'a' && c <= 'z')
        return (c - 32); // Convertir a mayúscula
    return c;
}

int main(void) {
    char *original = "hola, mundo!";
    char *result;

    // Usar ft_strmapi con la función to_uppercase
    result = ft_strmapi(original, to_uppercase);
    if (result == NULL) {
        printf("Error al asignar memoria.\n");
        return (1);
    }

    // Imprimir resultados
    printf("Cadena original: %s\n", original);
    printf("Cadena transformada (ft_strmapi): %s\n", result);

    // Liberar memoria asignada
    free(result);

    return 0;
}*/
