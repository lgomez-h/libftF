/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:52:21 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:52:39 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
}
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    int num = -12345;
    int fd = 1;  // Descriptor de archivo 1 es la salida estándar (stdout)

    // Usamos ft_putnbr_fd para imprimir el número
    int result = ft_putnbr_fd(num, fd);

    // Verificamos cuántos caracteres fueron impresos
    printf("\nCaracteres impresos: %d\n", result);

    return 0;
}*/
