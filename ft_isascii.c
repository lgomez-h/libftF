/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:42:54 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:43:15 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*#include <stdio.h>

int ft_isascii(int c);

int main() {
    // Prueba de la función ft_isascii
    int test_chars[] = {0, 65, 97, 127, 128, -1}; // Caracteres a probar
    size_t i; // Usar size_t para evitar advertencias

    for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++) {
        int c = test_chars[i]; // Usar int para evitar desbordamiento
        printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));
    }

    return 0;
}*/
