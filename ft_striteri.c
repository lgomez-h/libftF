/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:56:00 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:56:16 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	cnt;

	if (!s || !f)
	{
		return ;
	}
	cnt = 0;
	while (s[cnt])
	{
		f(cnt, &s[cnt]);
		cnt++;
	}
}
/*#include <stdio.h>
#include "libft.h"  // Asegúrate de que libft.h incluye la 
		    // declaración de ft_striteri

// Función de prueba que será pasada a ft_striteri
void print_index_and_char(unsigned int index, char *c) {
    printf("Índice: %u, Carácter: %c\n", index, *c);
}

int main(void) {
    char str[] = "Hello, World!";
    
    // Aplicar la función de prueba a cada carácter de la cadena
    ft_striteri(str, print_index_and_char);
    
    return 0;
}*/
