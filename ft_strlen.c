/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:59:01 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:59:18 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h> // Para comparar con la función estándar


size_t ft_strlen(const char *c);

int main() {
    // Prueba de la función ft_strlen
    const char *test_strings[] = {
        "Hello, World!",  // Cadena normal
        "",               // Cadena vacía
        "C programming",  // Cadena con espacios
        "1234567890",     // Cadena numérica
        "A string with special characters: !@#$%^&*()", //
        // Cadena con caracteres especiales
        NULL              // Cadena nula (debería manejarse con cuidado)
    };

    size_t i;
    for (i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); i++) {
        const char *str = test_strings[i];
        if (str == NULL) {
            printf("ft_strlen(NULL) = %zu\n", ft_strlen(str)); // Manejo de 
            //cadena nula
        } else {
            printf("ft_strlen(\"%s\") = %zu\n", str, ft_strlen(str));
        }
    }

    return 0;
}
da un fallo de segmegtacion si se le pasa un puntero nulo,pero la funcion
 real hace lo mismo,preguntar'*/
