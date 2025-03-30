/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:38:50 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:39:12 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*#include <stdio.h>
#include <string.h> // Para comparar con la función estándar


void ft_bzero(void *s, size_t n);

int main() {
    char buffer[15]; // Crear un buffer de 10 bytes

    // Inicializar el buffer con valores diferentes
    for (size_t i = 0; i < sizeof(buffer); i++) {
        buffer[i] = 'A' + (i % 26); // Llenar el buffer con letras A-J
    }

    // Imprimir el contenido del buffer antes de ft_bzero
    printf("Buffer before ft_bzero: ");
    for (size_t i = 0; i < sizeof(buffer); i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    // Llamar a ft_bzero para establecer los primeros 5 bytes a cero
    ft_bzero(buffer, 8);

    // Imprimir el contenido del buffer después de ft_bzero
    printf("Buffer after ft_bzero: ");
    for (size_t i = 0; i < sizeof(buffer); i++) {
        if (buffer[i] == '\0') {
            printf("\\0 "); // Imprimir como \0 para los ceros
        } else {
            printf("%c ", buffer[i]); // Imprimir el carácter
        }
    }
    printf("\n");

    return 0;
}*/
