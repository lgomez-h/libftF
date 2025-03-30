/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:42:00 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/10/05 18:42:05 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Función para crear un nuevo nodo de la lista
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// Función para imprimir la lista (para verificar el resultado)
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*new_node;

	// Caso 1: Agregar un nodo a una lista vacía
	new_node = ft_lstnew("Primero");
	ft_lstadd_front(&list, new_node);
	print_list(list);  // Esperado: Primero -> NULL

	// Caso 2: Agregar un segundo nodo al frente
	new_node = ft_lstnew("Segundo");
	ft_lstadd_front(&list, new_node);
	print_list(list);  // Esperado: Segundo -> Primero -> NULL

	// Caso 3: Agregar un tercer nodo al frente
	new_node = ft_lstnew("Tercero");
	ft_lstadd_front(&list, new_node);
	print_list(list);  // Esperado: Tercero -> Segundo -> Primero -> NULL

	// Limpiar memoria
	t_list *tmp;
	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}

	return 0;
}*/
