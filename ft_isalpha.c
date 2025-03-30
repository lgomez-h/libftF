/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:41:15 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:41:56 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    char test_chars[] = {'A', 'z', '1', '@', 'm', 'Z', '!', 128, -5};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++)
    {
        char c = test_chars[i];
        if (ft_isalpha(c))
        {
            printf("El carácter '%c' es una letra alfabética.\n", c);
        }
        else
        {
            printf("El carácter '%c' NO es una letra alfabética.\n", c);
        }
    }

    return 0;
}*/
