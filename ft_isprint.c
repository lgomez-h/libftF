/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:44:19 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:44:44 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*/#include <stdio.h>

int ft_isprint(int c);

int main() {
    // Prueba de la función ft_isprint
    int test_chars[] = {31, 32, 65, 97, 126, 127, 128}; // Caracteres a probar
    size_t i; // Usar size_t para evitar advertencias

    for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++) {
        int c = test_chars[i]; // Usar int para evitar desbordamiento
        printf("ft_isprint(%d) = %d\n", c, ft_isprint(c));
    }

    return 0;
}*/
