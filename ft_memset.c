/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:50:01 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:50:28 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char		*s;
	size_t				i;

	i = 0;
	s = ptr;
	while (i < n)
	{
		s[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
/*#include <stdio.h>
#include <string.h> // Para comparar con la función estándar
#include "libft.h"

void *ft_memset(void *ptr, int value, size_t n);

int main() {
    char buffer[15]; // Crear un buffer de 50 bytes

    // Inicializar el buffer con ceros
    memset(buffer, 0, sizeof(buffer));

    // Llenar el buffer con un valor específico usando ft_memset
    ft_memset(buffer, 'A', 10); // Llenar los primeros 10 bytes con 'A'

    // Imprimir el contenido del buffer
    printf("Buffer after ft_memset: ");
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
