/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:52:58 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:53:13 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	cnt;

	cnt = 0;
	if (!str)
	{
		write(fd, "(null)", 6);
		return ;
	}
	while (str[cnt])
	{
		write(fd, &str[cnt], 1);
		cnt++;
	}
}
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hola, mundo!";
    char *null_str = NULL;
    int fd = 1;  // Descriptor de archivo 1 es la salida estándar (stdout)

    // Usamos ft_putstr_fd para imprimir una cadena válida
    int result_valid = ft_putstr_fd(str, fd);
    printf("\nCaracteres impresos (cadena válida): %d\n", result_valid);

    // Usamos ft_putstr_fd para imprimir una cadena NULL
    int result_null = ft_putstr_fd(null_str, fd);
    printf("\nCaracteres impresos (cadena NULL): %d\n", result_null);

    return 0;
}**/
