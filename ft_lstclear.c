/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:43:19 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/10/05 18:43:22 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_backup;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lst_backup = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_backup;
	}
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

// Función de eliminación (para pasarla a ft_lstclear)
void	del(void *content)
{
	free(content);
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

	// Crear y agregar nodos a la lista
	new_node = ft_lstnew(strdup("Primero"));
	ft_lstadd_front(&list, new_node);
	new_node = ft_lstnew(strdup("Segundo"));
	ft_lstadd_front(&list, new_node);
	new_node = ft_lstnew(strdup("Tercero"));
	ft_lstadd_front(&list, new_node);

	// Imprimir lista antes de limpiar
	printf("Lista antes de ft_lstclear:\n");
	print_list(list);  // Esperado: Tercero -> Segundo -> Primero -> NULL

	// Limpiar la lista
	ft_lstclear(&list, del);

	// Verificar que la lista esté vacía
	if (!list)
		printf("Lista vacía después de ft_lstclear.\n");

	return 0;
}*/
