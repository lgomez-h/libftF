/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:43:40 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:44:02 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    // Ejemplos de prueba
    int test_chars[] = {'0', '9', 'a', 'Z', '@', '5', 256, -1}; //
     Incluye EOF como -1
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int c = test_chars[i];

        // Muestra el carácter en formato de carácter o entero para 
        valores no imprimibles
        if (c == EOF)
        {
            printf("EOF es tratado como no dígito.\n");
        }
        else if (c >= 0 && c <= 255)
        {
            printf("'%c' ", c);
        }
        else
        {
            printf("'%d' ", c); // Muestra el valor entero para valores 
            fuera del rango imprimible
        }

        // Verifica si es un dígito
        if (ft_isdigit(c))
        {
            printf("es un dígito.\n");
        }
        else
        {
            printf("no es un dígito.\n");
        }
    }

    return 0;
}*/
