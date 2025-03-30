/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:39:33 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/09/14 12:39:57 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	block_size;

	if (num != 0 && size != 0 && (num > (size_t)(-1) / size))
	{
		return (NULL);
	}
	block_size = num * size;
	ptr = malloc(block_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, block_size);
	return ((void *)ptr);
}

/* Declaración de la función ft_calloc
void *ft_calloc(size_t num, size_t size);

#include "libft.h"
#include <stdio.h>
int main(void)
{
    // Probar con ft_calloc
    int *arr;
    size_t num_elements = 5;
    
    // Usar ft_calloc para asignar memoria para un array de enteros
    arr = (int *)ft_calloc(num_elements, sizeof(int));
    if (arr == NULL)
    {
        printf("Error: Memoria no asignada.\n");
        return (1); // Salir con error
    }

    // Mostrar los valores iniciales del array para ver si son ceros
    printf("Valores iniciales con ft_calloc:\n");
    for (size_t i = 0; i < num_elements; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Liberar la memoria asignada
    free(arr);

    return 0;
}*/
