/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:25:43 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/10/05 19:25:46 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = malloc(sizeof(t_list));
	if (!newlst)
	{
		return (NULL);
	}
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
/*#include <stdio.h>
#include "libft.h"

// Función principal para probar ft_lstnew
int main(void)
{
    // Crear un nodo con una cadena de texto como contenido
    char *content = "Hola, soy un nodo";
    t_list *node = ft_lstnew(content);

    // Verificar si el nodo fue creado correctamente
    if (node != NULL)
    {
        // Imprimir el contenido del nodo
        printf("Contenido del nodo: %s\n", (char *)node->content);
    }
    else
    {
        printf("Error al crear el nodo.\n");
    }

    // Liberar la memoria asignada para el nodo
    free(node);

    return 0;
}*/
