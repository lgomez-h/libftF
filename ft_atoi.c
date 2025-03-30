/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:36:39 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:36:50 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	value;

	value = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == '\f')
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			neg = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = (value * 10) + (*str - '0');
		str++;
	}
	return (value * neg);
}
/*#include <stdio.h>

int ft_atoi(const char *str);

int main(void)
{
    const char *test1 = "42";
    const char *test2 = "    -123";
    const char *test3 = "+56";
    const char *test4 = " ";
    const char *test5 = "   987abc";
    const char *test6 = "-2147483648";  // Valor límite de un int
	const char *test7 = "\t\n\r\v\f469\n";
	int result = ft_atoi(test7);
    printf("Resultado: %d\n", result);
    printf("Test 1: ft_atoi(\"%s\") = %d\n", test1, ft_atoi(test1));
    printf("Test 2: ft_atoi(\"%s\") = %d\n", test2, ft_atoi(test2));
    printf("Test 3: ft_atoi(\"%s\") = %d\n", test3, ft_atoi(test3));
    printf("Test 4: ft_atoi(\"%s\") = %d\n", test4, ft_atoi(test4));
    printf("Test 5: ft_atoi(\"%s\") = %d\n", test5, ft_atoi(test5));
    printf("Test 6: ft_atoi(\"%s\") = %d\n", test6, ft_atoi(test6));
	printf("Test 7: ft_atoi(\"%s\") = %d\n", test7, ft_atoi(test7));
    return 0;
}*/
