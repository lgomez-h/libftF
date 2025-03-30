/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:27:08 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/10/05 19:27:17 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	if (!lst)
	{
		return (0);
	}
	cnt = 0;
	while (lst)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}
/*#include <stdio.h>
#include "libft.h"

// Función principal para probar ft_lstsize
int main(void)
{
    // Crear algunos nodos para la lista
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");

    // Enlazar los nodos
    node1->next = node2;
    node2->next = node3;

    // Obtener el tamaño de la lista
    int size = ft_lstsize(node1);

    // Imprimir el tamaño de la lista
    printf("El tamaño de la lista es: %d\n", size);

    // Liberar la memoria de los nodos
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
