/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:02:31 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 13:02:58 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		++start;
	while (start < end && ft_isset(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void) {
    char *s1 = "   ---Hola, Mundo!---   ";
    char *set = " -";
    char *result;

    // Probar ft_strtrim
    result = ft_strtrim(s1, set);

    if (result == NULL) {
        printf("Error al recortar la cadena.\n");
        return 1;
    }

    // Mostrar el resultado
    printf("Cadena original: '%s'\n", s1);
    printf("Cadena recortada: '%s'\n", result);

    // Liberar la memoria asignada
    free(result);

    return 0;
}*/
