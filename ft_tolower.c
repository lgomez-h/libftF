/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:03:58 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:04:16 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
/*#include <stdio.h>
int main()
{
    // Pruebas para verificar la función ft_tolower
    char test_chars[] = {'A', 'Z', 'a', 'z', '1', ' ', '!', '\0'};

    printf("Pruebas de ft_tolower:\n");
    for (int i = 0; test_chars[i] != '\0'; i++)
    {
        char original = test_chars[i];
        char lower = ft_tolower(original);
        printf("Original: '%c' -> Convertido: '%c'\n", original, lower);
    }

    return 0;
}*/
