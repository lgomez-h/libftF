/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:01:41 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:02:11 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp_str;

	tmp_str = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			tmp_str = (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return ((char *)tmp_str);
}
/*
#include <stdio.h>
char *ft_strrchr(const char *str, int c);

int main(void)
{
    const char *str = "Hola, munda!";
    char c = 'o';
    char *result;

    // Prueba con un carácter que existe en la cadena
    result = ft_strrchr(str, c);
    if (result != NULL)
    {
        printf("El carácter '%c' se encontró en: %s\n", c, result);
    }
    else
    {
        printf("El carácter '%c' no se encontró en la cadena.\n", c);
    }

    // Prueba con un carácter que no existe en la cadena
    c = 'x';
    result = ft_strrchr(str, c);
    if (result != NULL)
    {
        printf("El carácter '%c' se encontró en: %s\n", c, result);
    }
    else
    {
        printf("El carácter '%c' no se encontró en la cadena.\n", c);
    }

    // Prueba con el carácter nulo '\0'
    result = ft_strrchr(str, '\0');
    if (result != NULL)
    {
        printf("El carácter nulo '\\0' se encontró al final de la
cadena: %s\n", result);
    }
    else
    {
        printf("El carácter nulo '\\0' no se encontró en la cadena.\n");
    }

    return 0;
}*/
