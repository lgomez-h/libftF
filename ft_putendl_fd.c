/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:51:29 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:51:52 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
/*#include "libft.h"
#include <stdio.h>
int main(void)
{
    char *str = "Hola, mundo!";
    int fd = 1;  // Descriptor de archivo 1 es la salida estándar (stdout)

    // Usamos ft_putendl_fd para imprimir la cadena con una nueva línea
    int result = ft_putendl_fd(str, fd);

    // Verificamos cuántos caracteres fueron impresos
    printf("Caracteres impresos: %d\n", result);

    return 0;
}*/
