/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:49:55 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/10/05 18:50:03 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_content || !new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

// Función que aplica el mapeo (duplicar cadena de contenido)
void *duplicate_content(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str); // Duplicar la cadena original
    return new_str;
}

// Función para liberar el contenido
void delete_content(void *content)
{
    free(content);
}

// Función principal para probar ft_lstmap
int main(void)
{
    // Crear manualmente algunos elementos de la lista
    t_list *node1 = ft_lstnew(strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(strdup("Nodo 3"));

    // Enlazar los nodos
    node1->next = node2;
    node2->next = node3;

    // Aplicar ft_lstmap para duplicar el contenido de cada nodo
    t_list *new_list = ft_lstmap(node1, duplicate_content, delete_content);

    // Imprimir el contenido de la nueva lista mapeada
    t_list *temp = new_list;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Limpiar la lista original y la nueva lista
    ft_lstclear(&node1, delete_content);
    ft_lstclear(&new_list, delete_content);

    return 0;
}*/
