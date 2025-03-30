/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:45:19 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:46:23 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

static int	len_nb(int nb)
{
	int	cnt;

	if (!nb)
		return (1);
	cnt = 0;
	while (nb)
	{
		nb /= 10;
		cnt++;
	}
	return (cnt);
}

static char	*rev_str(char *str, int minus)
{
	char	tmp;
	int		cnt;
	int		len;

	len = ft_strlen(str);
	cnt = 0;
	if (minus)
		str[len] = '-';
	while (cnt < (len + minus) / 2)
	{
		tmp = str[cnt];
		str[cnt] = str[len - 1 - cnt + minus];
		str[len - 1 - cnt + minus] = tmp;
		cnt++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		minus;
	int		cnt;
	long	na;

	na = n;
	minus = 0;
	if (na < 0)
	{
		minus++;
		na *= -1;
	}
	str = ft_calloc(len_nb(na) + 1 + minus, 1);
	if (!str)
		return (NULL);
	cnt = 0;
	while (na >= 10)
	{
		str[cnt++] = (na % 10) + '0';
		na /= 10;
	}
	str[cnt] = (na % 10) + 48;
	return (rev_str(str, minus));
}
/*#include <stdio.h>
#include "libft.h"  // Asegúrate de tener la declaración de ft_itoa aquí

int main(void)
{
    int num;
    char *result;

    // Caso 1: Número positivo
    num = 12345;
    result = ft_itoa(num);
    printf("ft_itoa(%d) = %s\n", num, result);
    free(result); // Recuerda liberar la memoria

    // Caso 2: Número negativo
    num = -67890;
    result = ft_itoa(num);
    printf("ft_itoa(%d) = %s\n", num, result);
    free(result);

    // Caso 3: Cero
    num = 0;
    result = ft_itoa(num);
    printf("ft_itoa(%d) = %s\n", num, result);
    free(result);

    // Caso 4: Número negativo pequeño
    num = -1;
    result = ft_itoa(num);
    printf("ft_itoa(%d) = %s\n", num, result);
    free(result);

    // Caso 5: Número grande positivo
    num = 2147483647; // INT_MAX
    result = ft_itoa(num);
    printf("ft_itoa(%d) = %s\n", num, result);
    free(result);

    // Caso 6: Número grande negativo
    num = -2147483648; // INT_MIN
    result = ft_itoa(num);
    printf("ft_itoa(%d) = %s\n", num, result);
    free(result);

    return 0;
}*/
