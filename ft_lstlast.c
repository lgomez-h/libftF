/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:48:34 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/10/05 18:48:37 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr_last;

	if (!lst)
	{
		return (NULL);
	}
	while (lst)
	{
		ptr_last = lst;
		lst = lst->next;
	}
	return (ptr_last);
}
/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Función para crear un nuevo nodo de la lista
t_list *ft_lstnew(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

// Función principal para probar ft_lstlast
int main(void)
{
    // Crear manualmente algunos elementos de la lista
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");

    // Enlazar los nodos
    node1->next = node2;
    node2->next = node3;

    // Obtener el último nodo usando ft_lstlast
    t_list *ultimo = ft_lstlast(node1);

    // Imprimir el contenido del último nodo
    if (ultimo)
        printf("El contenido del último nodo es: %s\n", (char *)ultimo->content);
    else
        printf("La lista está vacía.\n");

    // Liberar la memoria asignada (opcional, pero buena práctica)
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
