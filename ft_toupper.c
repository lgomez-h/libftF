/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:04:31 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:04:53 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*#include <stdio.h>
int main()
{
    // Pruebas para verificar la función ft_toupper
    char test_chars[] = {'a', 'z', 'A', 'Z', '1', ' ', '!', '\0'};

    printf("Pruebas de ft_toupper:\n");
    for (int i = 0; test_chars[i] != '\0'; i++)
    {
        char original = test_chars[i];
        char upper = ft_toupper(original);
        printf("Original: '%c' -> Convertido: '%c'\n", original, upper);
    }

    return 0;
}*/
