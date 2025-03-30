/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:03:58 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:04:16 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	num;

	num = 0;
	while (*s)
	{
		if (*s != c)
		{
			num++;
			while (*s && *s != c)
			{
				s++;
			}
		}
		else
		{
			s++;
		}
	}
	return (num);
}

static void	free_all(char **array, size_t i)
{
	while (i > 0)
	{
		free(array[i - 1]);
		i--;
	}
	free(array);
}

static char	*ft_make_word(const char *s, char c, size_t *len)
{
	*len = 0;
	while (s[*len] && s[*len] != c)
	{
		(*len)++;
	}
	return (ft_substr(s, 0, *len));
}

static char	**ft_fill_array(const char *s, char c, char **array)
{
	int		i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			array[i] = ft_make_word(s, c, &len);
			if (!array[i])
			{
				free_all(array, i);
				return (NULL);
			}
			i++;
			s += len;
		}
		else
		{
			s++;
		}
	}
	array[i] = 0;
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**array;

	if (!s)
	{
		return (NULL);
	}
	array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!array)
	{
		return (NULL);
	}
	return (ft_fill_array(s, c, array));
}
/*#include <stdio.h>

int main(void)
{
    char **result;
    const char *test_str1 = "Hola, mundo! Este es un test.";
    const char *test_str2 = "   Espacios al inicio y al final   ";
    const char *test_str3 = "Palabras, separadas, por comas";
    const char *test_str4 = "";
    const char *test_str5 = "SinSeparador";

    // Probar ft_split con diferentes cadenas y separadores
    printf("Probando ft_split:\n");

    // Test 1
    result = ft_split(test_str1, ' ');
    printf("Entrada: \"%s\"\nSalida:\n", test_str1);
    for (size_t i = 0; result[i]; i++)
    {
        printf("  %s\n", result[i]);
        free(result[i]); // Liberar memoria para cada palabra
    }
    free(result); // Liberar memoria para el array de palabras

    // Test 2
    result = ft_split(test_str2, ' ');
    printf("Entrada: \"%s\"\nSalida:\n", test_str2);
    for (size_t i = 0; result[i]; i++)
    {
        printf("  %s\n", result[i]);
        free(result[i]);
    }
    free(result);

    // Test 3
    result = ft_split(test_str3, ',');
    printf("Entrada: \"%s\"\nSalida:\n", test_str3);
    for (size_t i = 0; result[i]; i++)
    {
        printf("  %s\n", result[i]);
        free(result[i]);
    }
    free(result);

    // Test 4
    result = ft_split(test_str4, ' ');
    printf("Entrada: \"%s\"\nSalida:\n", test_str4);
    for (size_t i = 0; result[i]; i++)
    {
        printf("  %s\n", result[i]);
        free(result[i]);
    }
    free(result);

    // Test 5
    result = ft_split(test_str5, ' ');
    printf("Entrada: \"%s\"\nSalida:\n", test_str5);
    for (size_t i = 0; result[i]; i++)
    {
        printf("  %s\n", result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}*/
