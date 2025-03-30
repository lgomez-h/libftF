/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:40:29 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:40:53 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*#include <stdio.h>

int ft_isalnum(int c);

int main() {
    // Prueba de la función ft_isalnum
    int test_chars[] = {'a', 'Z', '5', '!', ' ', 256, -1}; // Caracteres a probar
    size_t i; // Cambiar a size_t para evitar advertencias

    for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++) {
        int c = test_chars[i]; // Cambiar a int para evitar desbordamiento
        printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
    }

    return 0;
}*/
