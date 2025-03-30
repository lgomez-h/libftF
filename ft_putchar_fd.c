/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:50:47 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:51:10 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
    char	c = 'A';  // Caracter que vamos a imprimir
    int		fd = 1;    // File descriptor (1 es la salida estándar)

    // Usamos ft_putchar_fd para imprimir el caracter
    ft_putchar_fd(c, fd);

    // Verificamos si se imprimió correctamente
    printf("\nEl carácter '%c' fue impreso.\n", c);
    
    return 0;
}*/
