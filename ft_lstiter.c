/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:47:05 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/10/05 18:47:12 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_backup;

	if (!lst || !f)
		return ;
	lst_backup = lst;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	lst = lst_backup;
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

// Función para imprimir el contenido de cada nodo
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

// Función para limpiar la lista (liberar memoria)
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

	// Imprimir lista antes de ft_lstiter
	printf("Lista antes de ft_lstiter:\n");
	print_list(list);  // Esperado: Tercero -> Segundo -> Primero -> NULL

	// Aplicar ft_lstiter para imprimir el contenido de cada nodo
	printf("Contenido de la lista a través de ft_lstiter:\n");
	ft_lstiter(list, print_content);

	// Limpiar la lista
	ft_lstclear(&list, del);

	return 0;
}*/
